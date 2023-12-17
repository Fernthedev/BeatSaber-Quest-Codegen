#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebException)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebResponse;
}
namespace System::Net {
struct WebExceptionInternalStatus;
}
// Forward declare root types
namespace System::Net {
class WebException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebException);
// Type: System.Net::WebException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2427))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9085))
// CS Name: ::System.Net::WebException*
class CORDL_TYPE WebException : public ::System::InvalidOperationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::InvalidOperationException)]{};

/// @brief Field m_Status offset 0x8c
 __declspec(property(get=__get_m_Status, put=__set_m_Status)) ::System::Net::WebExceptionStatus  m_Status;

/// @brief Field m_Response offset 0x90
 __declspec(property(get=__get_m_Response, put=__set_m_Response)) ::System::Net::WebResponse*  m_Response;

/// @brief Field m_InternalStatus offset 0x98
 __declspec(property(get=__get_m_InternalStatus, put=__set_m_InternalStatus)) ::System::Net::WebExceptionInternalStatus  m_InternalStatus;

 __declspec(property(get=get_Status)) ::System::Net::WebExceptionStatus  Status;

 __declspec(property(get=get_Response)) ::System::Net::WebResponse*  Response;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set_m_Status(::System::Net::WebExceptionStatus  value) ;

constexpr ::System::Net::WebExceptionStatus& __get_m_Status() ;

constexpr ::System::Net::WebExceptionStatus const& __get_m_Status() const;

constexpr void __set_m_Response(::System::Net::WebResponse*  value) ;

constexpr ::System::Net::WebResponse* __get_m_Response() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponse*> __get_m_Response() const;

constexpr void __set_m_InternalStatus(::System::Net::WebExceptionInternalStatus  value) ;

constexpr ::System::Net::WebExceptionInternalStatus& __get_m_InternalStatus() ;

constexpr ::System::Net::WebExceptionInternalStatus const& __get_m_InternalStatus() const;

static inline ::System::Net::WebException* New_ctor() ;

/// @brief Method .ctor addr 0x299f8cc size 0x10 virtual false final false
inline void _ctor() ;

static inline ::System::Net::WebException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x299e0b8 size 0x14 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::Net::WebException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x299f8dc size 0x10 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::System::Net::WebException* New_ctor(::StringW  message, ::System::Net::WebExceptionStatus  status) ;

/// @brief Method .ctor addr 0x299e2a4 size 0x14 virtual false final false
inline void _ctor(::StringW  message, ::System::Net::WebExceptionStatus  status) ;

static inline ::System::Net::WebException* New_ctor(::StringW  message, ::System::Net::WebExceptionStatus  status, ::System::Net::WebExceptionInternalStatus  internalStatus, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x299f900 size 0x1c virtual false final false
inline void _ctor(::StringW  message, ::System::Net::WebExceptionStatus  status, ::System::Net::WebExceptionInternalStatus  internalStatus, ::System::Exception*  innerException) ;

static inline ::System::Net::WebException* New_ctor(::StringW  message, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response) ;

/// @brief Method .ctor addr 0x299f8ec size 0x14 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response) ;

static inline ::System::Net::WebException* New_ctor(::StringW  message, ::StringW  data, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response) ;

/// @brief Method .ctor addr 0x299f934 size 0xe0 virtual false final false
inline void _ctor(::StringW  message, ::StringW  data, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response) ;

static inline ::System::Net::WebException* New_ctor(::StringW  message, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response, ::System::Net::WebExceptionInternalStatus  internalStatus) ;

/// @brief Method .ctor addr 0x299f91c size 0x18 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response, ::System::Net::WebExceptionInternalStatus  internalStatus) ;

static inline ::System::Net::WebException* New_ctor(::StringW  message, ::StringW  data, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response, ::System::Net::WebExceptionInternalStatus  internalStatus) ;

/// @brief Method .ctor addr 0x299fa14 size 0xf0 virtual false final false
inline void _ctor(::StringW  message, ::StringW  data, ::System::Exception*  innerException, ::System::Net::WebExceptionStatus  status, ::System::Net::WebResponse*  response, ::System::Net::WebExceptionInternalStatus  internalStatus) ;

static inline ::System::Net::WebException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor addr 0x299fb04 size 0x10 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x299fb14 size 0xc virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetObjectData addr 0x299fb20 size 0x8 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method get_Status addr 0x299fb28 size 0x8 virtual false final false
inline ::System::Net::WebExceptionStatus get_Status() ;

/// @brief Method get_Response addr 0x299fb30 size 0x8 virtual false final false
inline ::System::Net::WebResponse* get_Response() ;

// Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebException(WebException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebException(WebException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebException, 0xa0>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebException*, "System.Net", "WebException");
