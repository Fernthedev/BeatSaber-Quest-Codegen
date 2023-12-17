#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypedReference)
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System {
struct TypedReference;
}
// Write type traits
MARK_VAL_T(::System::TypedReference);
// Type: System::TypedReference
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2572))
// CS Name: ::System::TypedReference
struct CORDL_TYPE TypedReference : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::System::RuntimeTypeHandle  type;

/// @brief Field Value offset 0x8
 __declspec(property(get=__get_Value, put=__set_Value)) ::cordl_internals::intptr_t  Value;

/// @brief Field Type offset 0x10
 __declspec(property(get=__get_Type, put=__set_Type)) ::cordl_internals::intptr_t  Type;

 __declspec(property(get=get_IsNull)) bool  IsNull;

constexpr void __set_type(::System::RuntimeTypeHandle  value) ;

constexpr ::System::RuntimeTypeHandle& __get_type() ;

constexpr ::System::RuntimeTypeHandle const& __get_type() const;

constexpr void __set_Value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Value() ;

constexpr ::cordl_internals::intptr_t const& __get_Value() const;

constexpr void __set_Type(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Type() ;

constexpr ::cordl_internals::intptr_t const& __get_Type() const;

/// @brief Method MakeTypedReference addr 0x25f1c40 size 0x448 virtual false final false
static inline ::System::TypedReference MakeTypedReference(::System::Object*  target, ::ArrayW<::System::Reflection::FieldInfo*,::Array<::System::Reflection::FieldInfo*>*>  flds) ;

/// @brief Method InternalMakeTypedReference addr 0x25f208c size 0x4 virtual false final false
static inline void InternalMakeTypedReference(::cordl_internals::Ptr<void>  result, ::System::Object*  target, ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  flds, ::System::RuntimeType*  lastFieldType) ;

/// @brief Method GetHashCode addr 0x25f2090 size 0xac virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x25f2148 size 0x58 virtual true final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method get_IsNull addr 0x25f21a0 size 0x6c virtual false final false
inline bool get_IsNull() ;

/// @brief Method SetTypedReference addr 0x25f220c size 0x50 virtual false final false
static inline void SetTypedReference(::System::TypedReference  target, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "type", ty: "::System::RuntimeTypeHandle", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr TypedReference(::System::RuntimeTypeHandle  type, ::cordl_internals::intptr_t  Value, ::cordl_internals::intptr_t  Type) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TypedReference(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TypedReference()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypedReference, 0x18>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::TypedReference, "System", "TypedReference");
