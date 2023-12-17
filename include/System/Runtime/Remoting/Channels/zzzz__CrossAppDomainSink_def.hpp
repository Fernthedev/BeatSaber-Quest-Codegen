#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrossAppDomainSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Channels {
struct __CrossAppDomainSink__ProcessMessageRes;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainSink;
}
namespace System::Runtime::Remoting::Channels {
struct __CrossAppDomainSink__ProcessMessageRes;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::CrossAppDomainSink);
MARK_VAL_T(::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes);
// Type: ::ProcessMessageRes
namespace System::Runtime::Remoting::Channels {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3117))
// CS Name: ::CrossAppDomainSink::ProcessMessageRes
struct CORDL_TYPE __CrossAppDomainSink__ProcessMessageRes : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field arrResponse offset 0x0
 __declspec(property(get=__get_arrResponse, put=__set_arrResponse)) ::ArrayW<uint8_t,::Array<uint8_t>*>  arrResponse;

/// @brief Field cadMrm offset 0x8
 __declspec(property(get=__get_cadMrm, put=__set_cadMrm)) ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*  cadMrm;

constexpr void __set_arrResponse(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_arrResponse() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_arrResponse() const;

constexpr void __set_cadMrm(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* __get_cadMrm() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*> __get_cadMrm() const;

// Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "cadMrm", ty: "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*", modifiers: "", def_value: None }]
constexpr __CrossAppDomainSink__ProcessMessageRes(::ArrayW<uint8_t,::Array<uint8_t>*>  arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*  cadMrm) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CrossAppDomainSink__ProcessMessageRes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CrossAppDomainSink__ProcessMessageRes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Channels
// Type: System.Runtime.Remoting.Channels::CrossAppDomainSink
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3118))
// CS Name: ::System.Runtime.Remoting.Channels::CrossAppDomainSink*
class CORDL_TYPE CrossAppDomainSink : public ::System::Object {
public:
// Declarations
using ProcessMessageRes = ::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _domainID offset 0x10
 __declspec(property(get=__get__domainID, put=__set__domainID)) int32_t  _domainID;

 __declspec(property(get=get_TargetDomainId)) int32_t  TargetDomainId;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

static inline void setStaticF_s_sinks(::System::Collections::Hashtable*  value) ;

static inline ::System::Collections::Hashtable* getStaticF_s_sinks() ;

static inline void setStaticF_processMessageMethod(::System::Reflection::MethodInfo*  value) ;

static inline ::System::Reflection::MethodInfo* getStaticF_processMessageMethod() ;

constexpr void __set__domainID(int32_t  value) ;

constexpr int32_t& __get__domainID() ;

constexpr int32_t const& __get__domainID() const;

static inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* New_ctor(int32_t  domainID) ;

/// @brief Method .ctor addr 0x24a3244 size 0x28 virtual false final false
inline void _ctor(int32_t  domainID) ;

/// @brief Method GetSink addr 0x24a2f2c size 0x2a0 virtual false final false
static inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(int32_t  domainID) ;

/// @brief Method get_TargetDomainId addr 0x24a326c size 0x8 virtual false final false
inline int32_t get_TargetDomainId() ;

/// @brief Method ProcessMessageInDomain addr 0x24a3274 size 0x138 virtual false final false
static inline ::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes ProcessMessageInDomain(::ArrayW<uint8_t,::Array<uint8_t>*>  arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*  cadMsg) ;

/// @brief Method SyncProcessMessage addr 0x24a34ec size 0x434 virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msgRequest) ;

/// @brief Method AsyncProcessMessage addr 0x24a3c34 size 0xcc virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  reqMsg, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

/// @brief Method SendAsyncMessage addr 0x24a3d2c size 0x10c virtual false final false
inline void SendAsyncMessage(::System::Object*  data) ;

/// @brief Method <AsyncProcessMessage>b__10_0 addr 0x24a3f34 size 0x80 virtual false final false
inline void _AsyncProcessMessage_b__10_0(::System::Object*  data) ;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrossAppDomainSink(CrossAppDomainSink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrossAppDomainSink(CrossAppDomainSink const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrossAppDomainSink()  = default;
public:


// Fields

// Static field s_sinks

// Static field processMessageMethod


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CrossAppDomainSink, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CrossAppDomainSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainSink*, "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes, "System.Runtime.Remoting.Channels", "CrossAppDomainSink/ProcessMessageRes");
