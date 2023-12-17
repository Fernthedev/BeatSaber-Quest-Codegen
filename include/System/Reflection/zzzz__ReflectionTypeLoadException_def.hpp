#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionTypeLoadException)
namespace System {
class Type;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Reflection {
class ReflectionTypeLoadException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ReflectionTypeLoadException);
// Type: System.Reflection::ReflectionTypeLoadException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3489))
// CS Name: ::System.Reflection::ReflectionTypeLoadException*
class CORDL_TYPE ReflectionTypeLoadException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::SystemException)]{};

/// @brief Field <Types>k__BackingField offset 0x90
 __declspec(property(get=__get__Types_k__BackingField, put=__set__Types_k__BackingField)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  _Types_k__BackingField;

/// @brief Field <LoaderExceptions>k__BackingField offset 0x98
 __declspec(property(get=__get__LoaderExceptions_k__BackingField, put=__set__LoaderExceptions_k__BackingField)) ::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  _LoaderExceptions_k__BackingField;

 __declspec(property(get=get_LoaderExceptions)) ::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  LoaderExceptions;

 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set__Types_k__BackingField(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& __get__Types_k__BackingField() ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& __get__Types_k__BackingField() const;

constexpr void __set__LoaderExceptions_k__BackingField(::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  value) ;

constexpr ::ArrayW<::System::Exception*,::Array<::System::Exception*>*>& __get__LoaderExceptions_k__BackingField() ;

constexpr ::ArrayW<::System::Exception*,::Array<::System::Exception*>*> const& __get__LoaderExceptions_k__BackingField() const;

static inline ::System::Reflection::ReflectionTypeLoadException* New_ctor(::ArrayW<::System::Type*,::Array<::System::Type*>*>  classes, ::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  exceptions) ;

/// @brief Method .ctor addr 0x24e9a98 size 0x3c virtual false final false
inline void _ctor(::ArrayW<::System::Type*,::Array<::System::Type*>*>  classes, ::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  exceptions) ;

static inline ::System::Reflection::ReflectionTypeLoadException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24e9ad4 size 0x138 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x24e9c0c size 0x128 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_LoaderExceptions addr 0x24e9d34 size 0x8 virtual false final false
inline ::ArrayW<::System::Exception*,::Array<::System::Exception*>*> get_LoaderExceptions() ;

/// @brief Method get_Message addr 0x24e9d3c size 0x8 virtual true final false
inline ::StringW get_Message() ;

/// @brief Method ToString addr 0x24e9e7c size 0x8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method CreateString addr 0x24e9d44 size 0x138 virtual false final false
inline ::StringW CreateString(bool  isMessage) ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeLoadException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionTypeLoadException(ReflectionTypeLoadException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeLoadException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionTypeLoadException(ReflectionTypeLoadException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionTypeLoadException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ReflectionTypeLoadException, 0xa0>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::ReflectionTypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ReflectionTypeLoadException*, "System.Reflection", "ReflectionTypeLoadException");
