#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeLoadException)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TypeLoadException;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeLoadException);
// Type: System::TypeLoadException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2573))
// CS Name: ::System::TypeLoadException*
class CORDL_TYPE TypeLoadException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::SystemException)]{};

/// @brief Field ClassName offset 0x90
 __declspec(property(get=__get_ClassName, put=__set_ClassName)) ::StringW  ClassName;

/// @brief Field AssemblyName offset 0x98
 __declspec(property(get=__get_AssemblyName, put=__set_AssemblyName)) ::StringW  AssemblyName;

/// @brief Field MessageArg offset 0xa0
 __declspec(property(get=__get_MessageArg, put=__set_MessageArg)) ::StringW  MessageArg;

/// @brief Field ResourceId offset 0xa8
 __declspec(property(get=__get_ResourceId, put=__set_ResourceId)) int32_t  ResourceId;

 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set_ClassName(::StringW  value) ;

constexpr ::StringW& __get_ClassName() ;

constexpr ::StringW const& __get_ClassName() const;

constexpr void __set_AssemblyName(::StringW  value) ;

constexpr ::StringW& __get_AssemblyName() ;

constexpr ::StringW const& __get_AssemblyName() const;

constexpr void __set_MessageArg(::StringW  value) ;

constexpr ::StringW& __get_MessageArg() ;

constexpr ::StringW const& __get_MessageArg() const;

constexpr void __set_ResourceId(int32_t  value) ;

constexpr int32_t& __get_ResourceId() ;

constexpr int32_t const& __get_ResourceId() const;

static inline ::System::TypeLoadException* New_ctor() ;

/// @brief Method .ctor addr 0x25f225c size 0x60 virtual false final false
inline void _ctor() ;

static inline ::System::TypeLoadException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25f22bc size 0x28 virtual false final false
inline void _ctor(::StringW  message) ;

/// @brief Method get_Message addr 0x25f22e4 size 0x18 virtual true final false
inline ::StringW get_Message() ;

/// @brief Method SetMessageField addr 0x25f22fc size 0xf0 virtual false final false
inline void SetMessageField() ;

static inline ::System::TypeLoadException* New_ctor(::StringW  className, ::StringW  assemblyName) ;

/// @brief Method .ctor addr 0x25f23ec size 0xc virtual false final false
inline void _ctor(::StringW  className, ::StringW  assemblyName) ;

static inline ::System::TypeLoadException* New_ctor(::StringW  className, ::StringW  assemblyName, ::StringW  messageArg, int32_t  resourceId) ;

/// @brief Method .ctor addr 0x25f23f8 size 0x60 virtual false final false
inline void _ctor(::StringW  className, ::StringW  assemblyName, ::StringW  messageArg, int32_t  resourceId) ;

static inline ::System::TypeLoadException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25f2458 size 0x148 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x25f25a0 size 0x1d4 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "TypeLoadException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeLoadException(TypeLoadException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeLoadException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeLoadException(TypeLoadException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeLoadException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeLoadException, 0xb0>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::TypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeLoadException*, "System", "TypeLoadException");
