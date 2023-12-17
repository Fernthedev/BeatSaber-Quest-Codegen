#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerMarker)
namespace Unity::Profiling {
struct __ProfilerMarker__AutoScope;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace Unity::Profiling {
struct __ProfilerMarker__AutoScope;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerMarker);
MARK_VAL_T(::Unity::Profiling::__ProfilerMarker__AutoScope);
// Type: ::AutoScope
namespace Unity::Profiling {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9965))
// CS Name: ::ProfilerMarker::AutoScope
struct CORDL_TYPE __ProfilerMarker__AutoScope : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr offset 0x0
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

/// @brief Method .ctor addr 0x2c9d788 size 0xa0 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  markerPtr) ;

/// @brief Method Dispose addr 0x2c9d864 size 0x90 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr __ProfilerMarker__AutoScope(::cordl_internals::intptr_t  m_Ptr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ProfilerMarker__AutoScope(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ProfilerMarker__AutoScope()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::__ProfilerMarker__AutoScope, 0x8>, "Size mismatch!");

} // namespace end def Unity::Profiling
// Type: Unity.Profiling::ProfilerMarker
namespace Unity::Profiling {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9966))
// CS Name: ::Unity.Profiling::ProfilerMarker
struct CORDL_TYPE ProfilerMarker : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using AutoScope = ::Unity::Profiling::__ProfilerMarker__AutoScope;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr offset 0x0
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

/// @brief Method .ctor addr 0x2c9d650 size 0x54 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method Auto addr 0x2c9d700 size 0x88 virtual false final false
inline ::Unity::Profiling::__ProfilerMarker__AutoScope Auto() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ProfilerMarker(::cordl_internals::intptr_t  m_Ptr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ProfilerMarker(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ProfilerMarker()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerMarker, 0x8>, "Size mismatch!");

} // namespace end def Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerMarker, "Unity.Profiling", "ProfilerMarker");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::__ProfilerMarker__AutoScope, "Unity.Profiling", "ProfilerMarker/AutoScope");
