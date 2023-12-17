#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lease)
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
namespace System::Runtime::Remoting::Lifetime {
class ISponsor;
}
namespace System::Collections {
class Queue;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Object;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Lifetime {
class __Lease__RenewalDelegate;
}
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class Lease;
}
namespace System::Runtime::Remoting::Lifetime {
class __Lease__RenewalDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::Lease);
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate);
// Type: ::RenewalDelegate
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3092))
// CS Name: ::Lease::RenewalDelegate*
class CORDL_TYPE __Lease__RenewalDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x249b2ec size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x249b644 size 0x14 virtual true final false
inline ::System::TimeSpan Invoke(::System::Runtime::Remoting::Lifetime::ILease*  lease) ;

/// @brief Method BeginInvoke addr 0x249b418 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease*  lease, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x249b61c size 0x28 virtual true final false
inline ::System::TimeSpan EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__Lease__RenewalDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Lease__RenewalDelegate(__Lease__RenewalDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Lease__RenewalDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Lease__RenewalDelegate(__Lease__RenewalDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Lease__RenewalDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate, 0x80>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Lifetime
// Type: System.Runtime.Remoting.Lifetime::Lease
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3093))
// CS Name: ::System.Runtime.Remoting.Lifetime::Lease*
class CORDL_TYPE Lease : public ::System::MarshalByRefObject {
public:
// Declarations
using RenewalDelegate = ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::MarshalByRefObject)]{};

/// @brief Field _leaseExpireTime offset 0x18
 __declspec(property(get=__get__leaseExpireTime, put=__set__leaseExpireTime)) ::System::DateTime  _leaseExpireTime;

/// @brief Field _currentState offset 0x20
 __declspec(property(get=__get__currentState, put=__set__currentState)) ::System::Runtime::Remoting::Lifetime::LeaseState  _currentState;

/// @brief Field _initialLeaseTime offset 0x28
 __declspec(property(get=__get__initialLeaseTime, put=__set__initialLeaseTime)) ::System::TimeSpan  _initialLeaseTime;

/// @brief Field _renewOnCallTime offset 0x30
 __declspec(property(get=__get__renewOnCallTime, put=__set__renewOnCallTime)) ::System::TimeSpan  _renewOnCallTime;

/// @brief Field _sponsorshipTimeout offset 0x38
 __declspec(property(get=__get__sponsorshipTimeout, put=__set__sponsorshipTimeout)) ::System::TimeSpan  _sponsorshipTimeout;

/// @brief Field _sponsors offset 0x40
 __declspec(property(get=__get__sponsors, put=__set__sponsors)) ::System::Collections::ArrayList*  _sponsors;

/// @brief Field _renewingSponsors offset 0x48
 __declspec(property(get=__get__renewingSponsors, put=__set__renewingSponsors)) ::System::Collections::Queue*  _renewingSponsors;

/// @brief Field _renewalDelegate offset 0x50
 __declspec(property(get=__get__renewalDelegate, put=__set__renewalDelegate)) ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*  _renewalDelegate;

 __declspec(property(get=get_CurrentLeaseTime)) ::System::TimeSpan  CurrentLeaseTime;

 __declspec(property(get=get_CurrentState)) ::System::Runtime::Remoting::Lifetime::LeaseState  CurrentState;

 __declspec(property(get=get_RenewOnCallTime)) ::System::TimeSpan  RenewOnCallTime;

/// @brief Convert operator to "::System::Runtime::Remoting::Lifetime::ILease"
constexpr operator  ::System::Runtime::Remoting::Lifetime::ILease*() noexcept;

constexpr void __set__leaseExpireTime(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__leaseExpireTime() ;

constexpr ::System::DateTime const& __get__leaseExpireTime() const;

constexpr void __set__currentState(::System::Runtime::Remoting::Lifetime::LeaseState  value) ;

constexpr ::System::Runtime::Remoting::Lifetime::LeaseState& __get__currentState() ;

constexpr ::System::Runtime::Remoting::Lifetime::LeaseState const& __get__currentState() const;

constexpr void __set__initialLeaseTime(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get__initialLeaseTime() ;

constexpr ::System::TimeSpan const& __get__initialLeaseTime() const;

constexpr void __set__renewOnCallTime(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get__renewOnCallTime() ;

constexpr ::System::TimeSpan const& __get__renewOnCallTime() const;

constexpr void __set__sponsorshipTimeout(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get__sponsorshipTimeout() ;

constexpr ::System::TimeSpan const& __get__sponsorshipTimeout() const;

constexpr void __set__sponsors(::System::Collections::ArrayList*  value) ;

constexpr ::System::Collections::ArrayList* __get__sponsors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> __get__sponsors() const;

constexpr void __set__renewingSponsors(::System::Collections::Queue*  value) ;

constexpr ::System::Collections::Queue* __get__renewingSponsors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> __get__renewingSponsors() const;

constexpr void __set__renewalDelegate(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*  value) ;

constexpr ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* __get__renewalDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*> __get__renewalDelegate() const;

static inline ::System::Runtime::Remoting::Lifetime::Lease* New_ctor() ;

/// @brief Method .ctor addr 0x249294c size 0x158 virtual false final false
inline void _ctor() ;

/// @brief Method get_CurrentLeaseTime addr 0x249acb4 size 0x68 virtual true final true
inline ::System::TimeSpan get_CurrentLeaseTime() ;

/// @brief Method get_CurrentState addr 0x249ad1c size 0x8 virtual true final true
inline ::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState() ;

/// @brief Method Activate addr 0x249ad24 size 0xc virtual false final false
inline void Activate() ;

/// @brief Method get_RenewOnCallTime addr 0x249ad30 size 0x8 virtual true final true
inline ::System::TimeSpan get_RenewOnCallTime() ;

/// @brief Method Renew addr 0x249ad38 size 0x8c virtual true final true
inline ::System::TimeSpan Renew(::System::TimeSpan  renewalTime) ;

/// @brief Method Unregister addr 0x249adc4 size 0x144 virtual true final true
inline void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor*  obj) ;

/// @brief Method UpdateState addr 0x249af08 size 0x1a0 virtual false final false
inline void UpdateState() ;

/// @brief Method CheckNextSponsor addr 0x249b0a8 size 0x244 virtual false final false
inline void CheckNextSponsor() ;

/// @brief Method ProcessSponsorResponse addr 0x249b438 size 0x1e4 virtual false final false
inline void ProcessSponsorResponse(::System::Object*  state, bool  timedOut) ;

// Ctor Parameters [CppParam { name: "", ty: "Lease", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lease(Lease && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lease", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lease(Lease const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Lease()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::Lease, 0x58>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::Lease);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::Lease*, "System.Runtime.Remoting.Lifetime", "Lease");
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*, "System.Runtime.Remoting.Lifetime", "Lease/RenewalDelegate");
