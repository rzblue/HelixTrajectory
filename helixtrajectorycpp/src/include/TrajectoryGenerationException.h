#pragma once

#include <stdexcept>
#include <string>

namespace helixtrajectory {

    /**
     * @brief This exception is thrown when a trajectory generator is unable
     * to generate a trajectory.
     */
    class TrajectoryGenerationException : public std::logic_error {
    public:
        /**
         * @brief Construct a new Trajectory Generation Exception object with a string
         * message.
         * 
         * @param message the string message
         */
        explicit TrajectoryGenerationException(const std::string& message);
        /**
         * @brief Construct a new Trajectory Generation Exception object with a string
         * message.
         * 
         * @param message the string message
         */
        explicit TrajectoryGenerationException(const char* message);
    };
}