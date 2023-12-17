#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Request)
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class __Message__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Request;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Request);
// Type: Oculus.Platform::Request
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13381))
// CS Name: ::Oculus.Platform::Request*
class CORDL_TYPE Request : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field callback_ offset 0x10
 __declspec(property(get=__get_callback_, put=__set_callback_)) ::Oculus::Platform::__Message__Callback*  callback_;

/// @brief Field <RequestID>k__BackingField offset 0x18
 __declspec(property(get=__get__RequestID_k__BackingField, put=__set__RequestID_k__BackingField)) uint64_t  _RequestID_k__BackingField;

 __declspec(property(get=get_RequestID, put=set_RequestID)) uint64_t  RequestID;

constexpr void __set_callback_(::Oculus::Platform::__Message__Callback*  value) ;

constexpr ::Oculus::Platform::__Message__Callback* __get_callback_() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message__Callback*> __get_callback_() const;

constexpr void __set__RequestID_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__RequestID_k__BackingField() ;

constexpr uint64_t const& __get__RequestID_k__BackingField() const;

static inline ::Oculus::Platform::Request* New_ctor(uint64_t  requestID) ;

/// @brief Method .ctor addr 0x26f7470 size 0x28 virtual false final false
inline void _ctor(uint64_t  requestID) ;

/// @brief Method get_RequestID addr 0x2700ca4 size 0x8 virtual false final false
inline uint64_t get_RequestID() ;

/// @brief Method set_RequestID addr 0x2700cac size 0x8 virtual false final false
inline void set_RequestID(uint64_t  value) ;

/// @brief Method OnComplete addr 0x26ca69c size 0x6c virtual false final false
inline ::Oculus::Platform::Request* OnComplete(::Oculus::Platform::__Message__Callback*  callback) ;

/// @brief Method HandleMessage addr 0x2700cb4 size 0x6c virtual true final false
inline void HandleMessage(::Oculus::Platform::Message*  msg) ;

/// @brief Method RunCallbacks addr 0x26cfc5c size 0x68 virtual false final false
static inline void RunCallbacks(uint32_t  limit) ;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Request(Request && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Request(Request const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Request()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Request, 0x20>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Request);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Request*, "Oculus.Platform", "Request");
