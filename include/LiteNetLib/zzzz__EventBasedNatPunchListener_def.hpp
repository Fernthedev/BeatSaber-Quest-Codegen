#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventBasedNatPunchListener)
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class __EventBasedNatPunchListener__OnNatIntroductionRequest;
}
namespace LiteNetLib {
class INatPunchListener;
}
namespace LiteNetLib {
class __EventBasedNatPunchListener__OnNatIntroductionSuccess;
}
namespace LiteNetLib {
struct NatAddressType;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class EventBasedNatPunchListener;
}
namespace LiteNetLib {
class __EventBasedNatPunchListener__OnNatIntroductionRequest;
}
namespace LiteNetLib {
class __EventBasedNatPunchListener__OnNatIntroductionSuccess;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::EventBasedNatPunchListener);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess);
// Type: ::OnNatIntroductionRequest
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14146))
// CS Name: ::EventBasedNatPunchListener::OnNatIntroductionRequest*
class CORDL_TYPE __EventBasedNatPunchListener__OnNatIntroductionRequest : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x21fa650 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x21fa780 size 0x14 virtual true final false
inline void Invoke(::System::Net::IPEndPoint*  localEndPoint, ::System::Net::IPEndPoint*  remoteEndPoint, ::StringW  token) ;

/// @brief Method BeginInvoke addr 0x21fa794 size 0x2c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint*  localEndPoint, ::System::Net::IPEndPoint*  remoteEndPoint, ::StringW  token, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x21fa7c0 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EventBasedNatPunchListener__OnNatIntroductionRequest(__EventBasedNatPunchListener__OnNatIntroductionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EventBasedNatPunchListener__OnNatIntroductionRequest(__EventBasedNatPunchListener__OnNatIntroductionRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EventBasedNatPunchListener__OnNatIntroductionRequest()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest, 0x80>, "Size mismatch!");

} // namespace end def LiteNetLib
// Type: ::OnNatIntroductionSuccess
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14147))
// CS Name: ::EventBasedNatPunchListener::OnNatIntroductionSuccess*
class CORDL_TYPE __EventBasedNatPunchListener__OnNatIntroductionSuccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x21fa7cc size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x21fa8fc size 0x14 virtual true final false
inline void Invoke(::System::Net::IPEndPoint*  targetEndPoint, ::LiteNetLib::NatAddressType  type, ::StringW  token) ;

/// @brief Method BeginInvoke addr 0x21fa910 size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint*  targetEndPoint, ::LiteNetLib::NatAddressType  type, ::StringW  token, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x21fa9a8 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionSuccess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EventBasedNatPunchListener__OnNatIntroductionSuccess(__EventBasedNatPunchListener__OnNatIntroductionSuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionSuccess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EventBasedNatPunchListener__OnNatIntroductionSuccess(__EventBasedNatPunchListener__OnNatIntroductionSuccess const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EventBasedNatPunchListener__OnNatIntroductionSuccess()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess, 0x80>, "Size mismatch!");

} // namespace end def LiteNetLib
// Type: LiteNetLib::EventBasedNatPunchListener
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14148))
// CS Name: ::LiteNetLib::EventBasedNatPunchListener*
class CORDL_TYPE EventBasedNatPunchListener : public ::System::Object {
public:
// Declarations
using OnNatIntroductionSuccess = ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess;

using OnNatIntroductionRequest = ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field NatIntroductionRequest offset 0x10
 __declspec(property(get=__get_NatIntroductionRequest, put=__set_NatIntroductionRequest)) ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*  NatIntroductionRequest;

/// @brief Field NatIntroductionSuccess offset 0x18
 __declspec(property(get=__get_NatIntroductionSuccess, put=__set_NatIntroductionSuccess)) ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*  NatIntroductionSuccess;

/// @brief Convert operator to "::LiteNetLib::INatPunchListener"
constexpr operator  ::LiteNetLib::INatPunchListener*() noexcept;

constexpr void __set_NatIntroductionRequest(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*  value) ;

constexpr ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* __get_NatIntroductionRequest() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*> __get_NatIntroductionRequest() const;

constexpr void __set_NatIntroductionSuccess(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*  value) ;

constexpr ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* __get_NatIntroductionSuccess() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*> __get_NatIntroductionSuccess() const;

/// @brief Method add_NatIntroductionRequest addr 0x21fa3a0 size 0x9c virtual false final false
inline void add_NatIntroductionRequest(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*  value) ;

/// @brief Method remove_NatIntroductionRequest addr 0x21fa43c size 0x9c virtual false final false
inline void remove_NatIntroductionRequest(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*  value) ;

/// @brief Method add_NatIntroductionSuccess addr 0x21fa4d8 size 0x9c virtual false final false
inline void add_NatIntroductionSuccess(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*  value) ;

/// @brief Method remove_NatIntroductionSuccess addr 0x21fa574 size 0x9c virtual false final false
inline void remove_NatIntroductionSuccess(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*  value) ;

/// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionRequest addr 0x21fa610 size 0x1c virtual true final true
inline void LiteNetLib_INatPunchListener_OnNatIntroductionRequest(::System::Net::IPEndPoint*  localEndPoint, ::System::Net::IPEndPoint*  remoteEndPoint, ::StringW  token) ;

/// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionSuccess addr 0x21fa62c size 0x1c virtual true final true
inline void LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(::System::Net::IPEndPoint*  targetEndPoint, ::LiteNetLib::NatAddressType  type, ::StringW  token) ;

static inline ::LiteNetLib::EventBasedNatPunchListener* New_ctor() ;

/// @brief Method .ctor addr 0x21fa648 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventBasedNatPunchListener(EventBasedNatPunchListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventBasedNatPunchListener(EventBasedNatPunchListener const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventBasedNatPunchListener()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNatPunchListener, 0x20>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::EventBasedNatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNatPunchListener*, "LiteNetLib", "EventBasedNatPunchListener");
NEED_NO_BOX(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionRequest");
NEED_NO_BOX(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess");
