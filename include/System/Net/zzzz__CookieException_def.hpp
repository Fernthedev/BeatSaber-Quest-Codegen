#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CookieException)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net {
class CookieException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CookieException);
// Type: System.Net::CookieException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2382))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9133))
// CS Name: ::System.Net::CookieException*
class CORDL_TYPE CookieException : public ::System::FormatException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::FormatException)]{};

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

static inline ::System::Net::CookieException* New_ctor() ;

/// @brief Method .ctor addr 0x29b34f4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::Net::CookieException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x29ab128 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::Net::CookieException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor addr 0x29b13e8 size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

static inline ::System::Net::CookieException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor addr 0x29b34fc size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x29b3504 size 0x8 virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetObjectData addr 0x29b350c size 0x8 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

// Ctor Parameters [CppParam { name: "", ty: "CookieException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CookieException(CookieException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CookieException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CookieException(CookieException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CookieException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CookieException, 0x90>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::CookieException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieException*, "System.Net", "CookieException");
