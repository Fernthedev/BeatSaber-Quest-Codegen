#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClientIdentity)
namespace System {
class MarshalByRefObject;
}
namespace System {
class WeakReference;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ClientIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ClientIdentity);
// Type: System.Runtime.Remoting::ClientIdentity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3060))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3061))
// CS Name: ::System.Runtime.Remoting::ClientIdentity*
class CORDL_TYPE ClientIdentity : public ::System::Runtime::Remoting::Identity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Runtime::Remoting::Identity)]{};

/// @brief Field _proxyReference offset 0x48
 __declspec(property(get=__get__proxyReference, put=__set__proxyReference)) ::System::WeakReference*  _proxyReference;

 __declspec(property(get=get_ClientProxy, put=set_ClientProxy)) ::System::MarshalByRefObject*  ClientProxy;

 __declspec(property(get=get_TargetUri)) ::StringW  TargetUri;

constexpr void __set__proxyReference(::System::WeakReference*  value) ;

constexpr ::System::WeakReference* __get__proxyReference() ;

constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> __get__proxyReference() const;

static inline ::System::Runtime::Remoting::ClientIdentity* New_ctor(::StringW  objectUri, ::System::Runtime::Remoting::ObjRef*  objRef) ;

/// @brief Method .ctor addr 0x2485244 size 0x108 virtual false final false
inline void _ctor(::StringW  objectUri, ::System::Runtime::Remoting::ObjRef*  objRef) ;

/// @brief Method get_ClientProxy addr 0x248534c size 0x88 virtual false final false
inline ::System::MarshalByRefObject* get_ClientProxy() ;

/// @brief Method set_ClientProxy addr 0x24853d4 size 0x70 virtual false final false
inline void set_ClientProxy(::System::MarshalByRefObject*  value) ;

/// @brief Method CreateObjRef addr 0x2485444 size 0x8 virtual true final false
inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type*  requestedType) ;

/// @brief Method get_TargetUri addr 0x248544c size 0x20 virtual false final false
inline ::StringW get_TargetUri() ;

// Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientIdentity(ClientIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientIdentity(ClientIdentity const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ClientIdentity()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ClientIdentity, 0x50>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ClientIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ClientIdentity*, "System.Runtime.Remoting", "ClientIdentity");
