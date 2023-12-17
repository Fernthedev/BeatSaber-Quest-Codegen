#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobHandle)
// Forward declare root types
namespace Unity::Jobs {
struct JobHandle;
}
// Write type traits
MARK_VAL_T(::Unity::Jobs::JobHandle);
// Type: Unity.Jobs::JobHandle
namespace Unity::Jobs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9977))
// CS Name: ::Unity.Jobs::JobHandle
struct CORDL_TYPE JobHandle : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field jobGroup offset 0x0
 __declspec(property(get=__get_jobGroup, put=__set_jobGroup)) ::cordl_internals::intptr_t  jobGroup;

/// @brief Field version offset 0x8
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

constexpr void __set_jobGroup(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_jobGroup() ;

constexpr ::cordl_internals::intptr_t const& __get_jobGroup() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

/// @brief Method Complete addr 0x2c9d930 size 0x8c virtual false final false
inline void Complete() ;

/// @brief Method get_IsCompleted addr 0x2c9d9f8 size 0x3c virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method ScheduleBatchedJobs addr 0x2c9da70 size 0x28 virtual false final false
static inline void ScheduleBatchedJobs() ;

/// @brief Method ScheduleBatchedJobsAndComplete addr 0x2c9d9bc size 0x3c virtual false final false
static inline void ScheduleBatchedJobsAndComplete(ByRef<::Unity::Jobs::JobHandle>  job) ;

/// @brief Method ScheduleBatchedJobsAndIsCompleted addr 0x2c9da34 size 0x3c virtual false final false
static inline bool ScheduleBatchedJobsAndIsCompleted(ByRef<::Unity::Jobs::JobHandle>  job) ;

/// @brief Method CombineDependencies addr 0x2c9da98 size 0x28 virtual false final false
static inline ::Unity::Jobs::JobHandle CombineDependencies(::Unity::Jobs::JobHandle  job0, ::Unity::Jobs::JobHandle  job1) ;

/// @brief Method CombineDependenciesInternal2 addr 0x2c9dac0 size 0x5c virtual false final false
static inline ::Unity::Jobs::JobHandle CombineDependenciesInternal2(ByRef<::Unity::Jobs::JobHandle>  job0, ByRef<::Unity::Jobs::JobHandle>  job1) ;

/// @brief Method CombineDependenciesInternal2_Injected addr 0x2c9db1c size 0x54 virtual false final false
static inline void CombineDependenciesInternal2_Injected(ByRef<::Unity::Jobs::JobHandle>  job0, ByRef<::Unity::Jobs::JobHandle>  job1, ByRef<::Unity::Jobs::JobHandle>  ret) ;

// Ctor Parameters [CppParam { name: "jobGroup", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JobHandle(::cordl_internals::intptr_t  jobGroup, int32_t  version) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit JobHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 JobHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::JobHandle, 0x10>, "Size mismatch!");

} // namespace end def Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::JobHandle, "Unity.Jobs", "JobHandle");
