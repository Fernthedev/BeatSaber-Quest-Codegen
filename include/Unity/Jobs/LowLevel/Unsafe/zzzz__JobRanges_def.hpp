#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobRanges)
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
// Write type traits
MARK_VAL_T(::Unity::Jobs::LowLevel::Unsafe::JobRanges);
// Type: Unity.Jobs.LowLevel.Unsafe::JobRanges
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9979))
// CS Name: ::Unity.Jobs.LowLevel.Unsafe::JobRanges
struct CORDL_TYPE JobRanges : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field BatchSize offset 0x0
 __declspec(property(get=__get_BatchSize, put=__set_BatchSize)) int32_t  BatchSize;

/// @brief Field NumJobs offset 0x4
 __declspec(property(get=__get_NumJobs, put=__set_NumJobs)) int32_t  NumJobs;

/// @brief Field TotalIterationCount offset 0x8
 __declspec(property(get=__get_TotalIterationCount, put=__set_TotalIterationCount)) int32_t  TotalIterationCount;

/// @brief Field NumPhases offset 0xc
 __declspec(property(get=__get_NumPhases, put=__set_NumPhases)) int32_t  NumPhases;

/// @brief Field StartEndIndex offset 0x10
 __declspec(property(get=__get_StartEndIndex, put=__set_StartEndIndex)) ::cordl_internals::intptr_t  StartEndIndex;

/// @brief Field PhaseData offset 0x18
 __declspec(property(get=__get_PhaseData, put=__set_PhaseData)) ::cordl_internals::intptr_t  PhaseData;

constexpr void __set_BatchSize(int32_t  value) ;

constexpr int32_t& __get_BatchSize() ;

constexpr int32_t const& __get_BatchSize() const;

constexpr void __set_NumJobs(int32_t  value) ;

constexpr int32_t& __get_NumJobs() ;

constexpr int32_t const& __get_NumJobs() const;

constexpr void __set_TotalIterationCount(int32_t  value) ;

constexpr int32_t& __get_TotalIterationCount() ;

constexpr int32_t const& __get_TotalIterationCount() const;

constexpr void __set_NumPhases(int32_t  value) ;

constexpr int32_t& __get_NumPhases() ;

constexpr int32_t const& __get_NumPhases() const;

constexpr void __set_StartEndIndex(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_StartEndIndex() ;

constexpr ::cordl_internals::intptr_t const& __get_StartEndIndex() const;

constexpr void __set_PhaseData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_PhaseData() ;

constexpr ::cordl_internals::intptr_t const& __get_PhaseData() const;

// Ctor Parameters [CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NumJobs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TotalIterationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NumPhases", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StartEndIndex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "PhaseData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr JobRanges(int32_t  BatchSize, int32_t  NumJobs, int32_t  TotalIterationCount, int32_t  NumPhases, ::cordl_internals::intptr_t  StartEndIndex, ::cordl_internals::intptr_t  PhaseData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit JobRanges(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 JobRanges()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobRanges, 0x20>, "Size mismatch!");

} // namespace end def Unity::Jobs::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobRanges, "Unity.Jobs.LowLevel.Unsafe", "JobRanges");
