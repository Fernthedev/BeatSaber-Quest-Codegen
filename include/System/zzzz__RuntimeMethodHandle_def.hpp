#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMethodHandle)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System {
struct TypeNameFormatFlags;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct RuntimeMethodHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeMethodHandle);
// Type: System::RuntimeMethodHandle
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2617))
// CS Name: ::System::RuntimeMethodHandle
struct CORDL_TYPE RuntimeMethodHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) ::cordl_internals::intptr_t  value;

 __declspec(property(get=get_Value)) ::cordl_internals::intptr_t  Value;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

constexpr void __set_value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_value() ;

constexpr ::cordl_internals::intptr_t const& __get_value() const;

/// @brief Method .ctor addr 0x25ff248 size 0x8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  v) ;

/// @brief Method .ctor addr 0x25ff250 size 0x1b4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Value addr 0x25ff404 size 0x8 virtual false final false
inline ::cordl_internals::intptr_t get_Value() ;

/// @brief Method GetObjectData addr 0x25ff40c size 0x1bc virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Equals addr 0x25ff5c8 size 0xfc virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x25ff6c4 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ConstructInstantiation addr 0x25ff6cc size 0x158 virtual false final false
static inline ::StringW ConstructInstantiation(::System::Reflection::RuntimeMethodInfo*  method, ::System::TypeNameFormatFlags  format) ;

/// @brief Method IsNullHandle addr 0x25ff824 size 0x58 virtual false final false
inline bool IsNullHandle() ;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeMethodHandle(::cordl_internals::intptr_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeMethodHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeMethodHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeMethodHandle, 0x8>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeMethodHandle, "System", "RuntimeMethodHandle");
