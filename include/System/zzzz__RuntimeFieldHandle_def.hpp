#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeFieldHandle)
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class RuntimeFieldInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System {
struct RuntimeFieldHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeFieldHandle);
// Type: System::RuntimeFieldHandle
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2616))
// CS Name: ::System::RuntimeFieldHandle
struct CORDL_TYPE RuntimeFieldHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
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

/// @brief Method .ctor addr 0x25fedb8 size 0x8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  v) ;

/// @brief Method .ctor addr 0x25fedc0 size 0x1b4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Value addr 0x25fef74 size 0x8 virtual false final false
inline ::cordl_internals::intptr_t get_Value() ;

/// @brief Method GetObjectData addr 0x25fef7c size 0x1bc virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Equals addr 0x25ff138 size 0xfc virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x25ff234 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method SetValueInternal addr 0x25ff23c size 0x4 virtual false final false
static inline void SetValueInternal(::System::Reflection::FieldInfo*  fi, ::System::Object*  obj, ::System::Object*  value) ;

/// @brief Method SetValue addr 0x25ff240 size 0x4 virtual false final false
static inline void SetValue(::System::Reflection::RuntimeFieldInfo*  field, ::System::Object*  obj, ::System::Object*  value, ::System::RuntimeType*  fieldType, ::System::Reflection::FieldAttributes  fieldAttr, ::System::RuntimeType*  declaringType, ByRef<bool>  domainInitialized) ;

/// @brief Method SetValueDirect addr 0x25ff244 size 0x4 virtual false final false
static inline void SetValueDirect(::System::Reflection::RuntimeFieldInfo*  field, ::System::RuntimeType*  fieldType, ::cordl_internals::Ptr<void>  pTypedRef, ::System::Object*  value, ::System::RuntimeType*  contextType) ;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeFieldHandle(::cordl_internals::intptr_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeFieldHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeFieldHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeFieldHandle, 0x8>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeFieldHandle, "System", "RuntimeFieldHandle");
