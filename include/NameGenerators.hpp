/**
 * @file NameGenerators.hpp
 * @author Joel Height (On3SnowySnowman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 01-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#pragma once

#include <string>
#include <array>
#include <unordered_map>
#include <vector>

#include <Fr_WeightedDistribution.hpp>
#include <JsonHandler.hpp>

/** Static class used for generating random names for various different entities. */
class NameGenerators
{

public:

    static void init();

    static std::string generate_player_name();

    static std::string generate_planet_name();

private:

    // Members

    static const std::string s_TWO_CONSONANT_CLUSTER_NO_END_VOWEL_REQUIRED_PATH;
    static const std::string s_TWO_CONSONANT_CLUSTER_END_VOWEL_REQUIRED_PATH;
    static const std::string s_TWO_CONSONANT_CLUSTER_STARTERS_PATH;

    static const std::array<char, 5> s_VOWELS;
    static const std::array<char, 21> s_CONSONANTS;

    // An array of consonant clusters of size 2, that do not require a vowel to be placed after.
    static std::array<std::array<char, 2>, 172> s_two_consonant_cluster_no_end_vowel_required;

    // An array of consonant clusters of size 2, that require a vowel to be placed after.
    static std::array<std::array<char, 2>, 268> s_two_consonant_cluster_end_vowel_required;

    // An array of consonant clusters of size 2 that can start a name.
    static std::array<std::array<char, 2>, 83> s_two_consonant_cluster_starters;


    // Methods
    
    /** Loads the consonant clusters of size 2 into memory. */
    static void _load_two_consonant_clusters();

    static void _handle_first_query_for_consonant(std::string& content, uint8_t& character_budget);

    static void _handle_vowel_query(std::string& content, uint8_t& character_budget);

    static void _handle_consonant_query(std::string& content, uint8_t& character_budget);
};




