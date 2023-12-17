#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObjectDisposedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class ObjectDisposedException;
}
// Write type traits
MARK_REF_PTR_T(::System::ObjectDisposedException);
// Type: System::ObjectDisposedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2427))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2453))
// CS Name: ::System::ObjectDisposedException*
class CORDL_TYPE ObjectDisposedException : public ::System::InvalidOperationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::InvalidOperationException)]{};

/// @brief Field _objectName offset 0x90
 __declspec(property(get=__get__objectName, put=__set__objectName)) ::StringW  _objectName;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_ObjectName)) ::StringW  ObjectName;

constexpr void __set__objectName(::StringW  value) ;

constexpr ::StringW& __get__objectName() ;

constexpr ::StringW const& __get__objectName() const;

static inline ::System::ObjectDisposedException* New_ctor() ;

/// @brief Method .ctor addr 0x25bda50 size 0x60 virtual false final false
inline void _ctor() ;

static inline ::System::ObjectDisposedException* New_ctor(::StringW  objectName) ;

/// @brief Method .ctor addr 0x25bdae8 size 0x6c virtual false final false
inline void _ctor(::StringW  objectName) ;

static inline ::System::ObjectDisposedException* New_ctor(::StringW  objectName, ::StringW  message) ;

/// @brief Method .ctor addr 0x25bdab0 size 0x38 virtual false final false
inline void _ctor(::StringW  objectName, ::StringW  message) ;

static inline ::System::ObjectDisposedException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25bdb54 size 0x88 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x25bdbdc size 0x108 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Message addr 0x25bddcc size 0xd4 virtual true final false
inline ::StringW get_Message() ;

/// @brief Method get_ObjectName addr 0x25bdce4 size 0x54 virtual false final false
inline ::StringW get_ObjectName() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectDisposedException(ObjectDisposedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectDisposedException(ObjectDisposedException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectDisposedException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ObjectDisposedException, 0x98>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ObjectDisposedException);
DEFINE_IL2CPP_ARG_TYPE(::System::ObjectDisposedException*, "System", "ObjectDisposedException");
