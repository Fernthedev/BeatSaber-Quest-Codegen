#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRNotifications)
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct EVRNotificationError;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRNotificationStyle;
}
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
namespace OVR::OpenVR {
struct EVRNotificationType;
}
namespace OVR::OpenVR {
class __IVRNotifications___RemoveNotification;
}
namespace OVR::OpenVR {
class __IVRNotifications___CreateNotification;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRNotifications___CreateNotification;
}
namespace OVR::OpenVR {
class __IVRNotifications___RemoveNotification;
}
namespace OVR::OpenVR {
struct IVRNotifications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRNotifications___CreateNotification);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRNotifications___RemoveNotification);
MARK_VAL_T(::OVR::OpenVR::IVRNotifications);
// Type: ::_CreateNotification
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8491))
// CS Name: ::IVRNotifications::_CreateNotification*
class CORDL_TYPE __IVRNotifications___CreateNotification : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRNotifications___CreateNotification* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ea9ac size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eaa70 size 0x18 virtual true final false
inline ::OVR::OpenVR::EVRNotificationError Invoke(uint64_t  ulOverlayHandle, uint64_t  ulUserValue, ::OVR::OpenVR::EVRNotificationType  type, ::StringW  pchText, ::OVR::OpenVR::EVRNotificationStyle  style, ByRef<::OVR::OpenVR::NotificationBitmap_t>  pImage, ByRef<uint32_t>  pNotificationId) ;

/// @brief Method BeginInvoke addr 0x27eaa88 size 0x15c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  ulOverlayHandle, uint64_t  ulUserValue, ::OVR::OpenVR::EVRNotificationType  type, ::StringW  pchText, ::OVR::OpenVR::EVRNotificationStyle  style, ByRef<::OVR::OpenVR::NotificationBitmap_t>  pImage, ByRef<uint32_t>  pNotificationId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eabe4 size 0x34 virtual true final false
inline ::OVR::OpenVR::EVRNotificationError EndInvoke(ByRef<::OVR::OpenVR::NotificationBitmap_t>  pImage, ByRef<uint32_t>  pNotificationId, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___CreateNotification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRNotifications___CreateNotification(__IVRNotifications___CreateNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___CreateNotification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRNotifications___CreateNotification(__IVRNotifications___CreateNotification const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRNotifications___CreateNotification()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRNotifications___CreateNotification, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_RemoveNotification
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8492))
// CS Name: ::IVRNotifications::_RemoveNotification*
class CORDL_TYPE __IVRNotifications___RemoveNotification : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRNotifications___RemoveNotification* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eac18 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eacdc size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRNotificationError Invoke(uint32_t  notificationId) ;

/// @brief Method BeginInvoke addr 0x27eacf0 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  notificationId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ead74 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRNotificationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___RemoveNotification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRNotifications___RemoveNotification(__IVRNotifications___RemoveNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___RemoveNotification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRNotifications___RemoveNotification(__IVRNotifications___RemoveNotification const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRNotifications___RemoveNotification()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRNotifications___RemoveNotification, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRNotifications
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8493))
// CS Name: ::OVR.OpenVR::IVRNotifications
struct CORDL_TYPE IVRNotifications : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using _RemoveNotification = ::OVR::OpenVR::__IVRNotifications___RemoveNotification;

using _CreateNotification = ::OVR::OpenVR::__IVRNotifications___CreateNotification;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field CreateNotification offset 0x0
 __declspec(property(get=__get_CreateNotification, put=__set_CreateNotification)) ::OVR::OpenVR::__IVRNotifications___CreateNotification*  CreateNotification;

/// @brief Field RemoveNotification offset 0x8
 __declspec(property(get=__get_RemoveNotification, put=__set_RemoveNotification)) ::OVR::OpenVR::__IVRNotifications___RemoveNotification*  RemoveNotification;

constexpr void __set_CreateNotification(::OVR::OpenVR::__IVRNotifications___CreateNotification*  value) ;

constexpr ::OVR::OpenVR::__IVRNotifications___CreateNotification* __get_CreateNotification() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRNotifications___CreateNotification*> __get_CreateNotification() const;

constexpr void __set_RemoveNotification(::OVR::OpenVR::__IVRNotifications___RemoveNotification*  value) ;

constexpr ::OVR::OpenVR::__IVRNotifications___RemoveNotification* __get_RemoveNotification() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRNotifications___RemoveNotification*> __get_RemoveNotification() const;

// Ctor Parameters [CppParam { name: "CreateNotification", ty: "::OVR::OpenVR::__IVRNotifications___CreateNotification*", modifiers: "", def_value: None }, CppParam { name: "RemoveNotification", ty: "::OVR::OpenVR::__IVRNotifications___RemoveNotification*", modifiers: "", def_value: None }]
constexpr IVRNotifications(::OVR::OpenVR::__IVRNotifications___CreateNotification*  CreateNotification, ::OVR::OpenVR::__IVRNotifications___RemoveNotification*  RemoveNotification) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRNotifications(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRNotifications()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRNotifications, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRNotifications___CreateNotification);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRNotifications___CreateNotification*, "OVR.OpenVR", "IVRNotifications/_CreateNotification");
NEED_NO_BOX(::OVR::OpenVR::__IVRNotifications___RemoveNotification);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRNotifications___RemoveNotification*, "OVR.OpenVR", "IVRNotifications/_RemoveNotification");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRNotifications, "OVR.OpenVR", "IVRNotifications");
