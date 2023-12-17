#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketException)
namespace System::Net {
class EndPoint;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SocketException);
// Type: System.Net.Sockets::SocketException
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9492))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9336))
// CS Name: ::System.Net.Sockets::SocketException*
class CORDL_TYPE SocketException : public ::System::ComponentModel::Win32Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::ComponentModel::Win32Exception)]{};

/// @brief Field m_EndPoint offset 0x90
 __declspec(property(get=__get_m_EndPoint, put=__set_m_EndPoint)) ::System::Net::EndPoint*  m_EndPoint;

 __declspec(property(get=get_ErrorCode)) int32_t  ErrorCode;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_SocketErrorCode)) ::System::Net::Sockets::SocketError  SocketErrorCode;

constexpr void __set_m_EndPoint(::System::Net::EndPoint*  value) ;

constexpr ::System::Net::EndPoint* __get_m_EndPoint() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> __get_m_EndPoint() const;

/// @brief Method WSAGetLastError_icall addr 0x28fc484 size 0x4 virtual false final false
static inline int32_t WSAGetLastError_icall() ;

static inline ::System::Net::Sockets::SocketException* New_ctor() ;

/// @brief Method .ctor addr 0x28fc488 size 0x20 virtual false final false
inline void _ctor() ;

static inline ::System::Net::Sockets::SocketException* New_ctor(int32_t  error, ::StringW  message) ;

/// @brief Method .ctor addr 0x28fc4a8 size 0x8 virtual false final false
inline void _ctor(int32_t  error, ::StringW  message) ;

static inline ::System::Net::Sockets::SocketException* New_ctor(int32_t  errorCode) ;

/// @brief Method .ctor addr 0x28fa6ec size 0x8 virtual false final false
inline void _ctor(int32_t  errorCode) ;

static inline ::System::Net::Sockets::SocketException* New_ctor(::System::Net::Sockets::SocketError  socketError) ;

/// @brief Method .ctor addr 0x28fbc30 size 0x8 virtual false final false
inline void _ctor(::System::Net::Sockets::SocketError  socketError) ;

static inline ::System::Net::Sockets::SocketException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor addr 0x28fc4b0 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method get_ErrorCode addr 0x28fc4b8 size 0x8 virtual true final false
inline int32_t get_ErrorCode() ;

/// @brief Method get_Message addr 0x28fc4c0 size 0x90 virtual true final false
inline ::StringW get_Message() ;

/// @brief Method get_SocketErrorCode addr 0x28fa370 size 0x8 virtual false final false
inline ::System::Net::Sockets::SocketError get_SocketErrorCode() ;

// Ctor Parameters [CppParam { name: "", ty: "SocketException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketException(SocketException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketException(SocketException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SocketException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketException, 0x98>, "Size mismatch!");

} // namespace end def System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SocketException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketException*, "System.Net.Sockets", "SocketException");
