#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeArrayDispose)
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeArrayDispose);
// Type: Unity.Collections::NativeArrayDispose
namespace Unity::Collections {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10000))
// CS Name: ::Unity.Collections::NativeArrayDispose
struct CORDL_TYPE NativeArrayDispose : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_AllocatorLabel offset 0x8
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method Dispose addr 0x2c9dfe0 size 0x44 virtual false final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArrayDispose(::cordl_internals::Ptr<void>  m_Buffer, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArrayDispose(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArrayDispose()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayDispose, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayDispose, "Unity.Collections", "NativeArrayDispose");
