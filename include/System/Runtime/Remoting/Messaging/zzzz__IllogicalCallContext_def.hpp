#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IllogicalCallContext)
namespace System {
class Object;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IllogicalCallContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IllogicalCallContext);
// Type: System.Runtime.Remoting.Messaging::IllogicalCallContext
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3144))
// CS Name: ::System.Runtime.Remoting.Messaging::IllogicalCallContext*
class CORDL_TYPE IllogicalCallContext : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Datastore offset 0x10
 __declspec(property(get=__get_m_Datastore, put=__set_m_Datastore)) ::System::Collections::Hashtable*  m_Datastore;

/// @brief Field m_HostContext offset 0x18
 __declspec(property(get=__get_m_HostContext, put=__set_m_HostContext)) ::System::Object*  m_HostContext;

 __declspec(property(get=get_Datastore)) ::System::Collections::Hashtable*  Datastore;

 __declspec(property(get=get_HostContext, put=set_HostContext)) ::System::Object*  HostContext;

 __declspec(property(get=get_HasUserData)) bool  HasUserData;

constexpr void __set_m_Datastore(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_m_Datastore() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_m_Datastore() const;

constexpr void __set_m_HostContext(::System::Object*  value) ;

constexpr ::System::Object* __get_m_HostContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_HostContext() const;

/// @brief Method get_Datastore addr 0x24a634c size 0x6c virtual false final false
inline ::System::Collections::Hashtable* get_Datastore() ;

/// @brief Method get_HostContext addr 0x24a63b8 size 0x8 virtual false final false
inline ::System::Object* get_HostContext() ;

/// @brief Method set_HostContext addr 0x24a63c0 size 0x8 virtual false final false
inline void set_HostContext(::System::Object*  value) ;

/// @brief Method get_HasUserData addr 0x24a63c8 size 0x2c virtual false final false
inline bool get_HasUserData() ;

/// @brief Method FreeNamedDataSlot addr 0x24a6288 size 0x2c virtual false final false
inline void FreeNamedDataSlot(::StringW  name) ;

/// @brief Method CreateCopy addr 0x24a63f4 size 0x254 virtual false final false
inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy() ;

static inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* New_ctor() ;

/// @brief Method .ctor addr 0x24a6648 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IllogicalCallContext(IllogicalCallContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IllogicalCallContext(IllogicalCallContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IllogicalCallContext()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::IllogicalCallContext, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IllogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IllogicalCallContext*, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
