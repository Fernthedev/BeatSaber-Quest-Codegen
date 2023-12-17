#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__MethodCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConstructionCall)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ConstructionCall);
// Type: System.Runtime.Remoting.Messaging::ConstructionCall
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3174))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3160))
// CS Name: ::System.Runtime.Remoting.Messaging::ConstructionCall*
class CORDL_TYPE ConstructionCall : public ::System::Runtime::Remoting::Messaging::MethodCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::Runtime::Remoting::Messaging::MethodCall)]{};

/// @brief Field _activator offset 0x68
 __declspec(property(get=__get__activator, put=__set__activator)) ::System::Runtime::Remoting::Activation::IActivator*  _activator;

/// @brief Field _activationAttributes offset 0x70
 __declspec(property(get=__get__activationAttributes, put=__set__activationAttributes)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _activationAttributes;

/// @brief Field _contextProperties offset 0x78
 __declspec(property(get=__get__contextProperties, put=__set__contextProperties)) ::System::Collections::IList*  _contextProperties;

/// @brief Field _activationType offset 0x80
 __declspec(property(get=__get__activationType, put=__set__activationType)) ::System::Type*  _activationType;

/// @brief Field _activationTypeName offset 0x88
 __declspec(property(get=__get__activationTypeName, put=__set__activationTypeName)) ::StringW  _activationTypeName;

/// @brief Field _isContextOk offset 0x90
 __declspec(property(get=__get__isContextOk, put=__set__isContextOk)) bool  _isContextOk;

/// @brief Field _sourceProxy offset 0x98
 __declspec(property(get=__get__sourceProxy, put=__set__sourceProxy)) ::System::Runtime::Remoting::Proxies::RemotingProxy*  _sourceProxy;

 __declspec(property(get=get_IsContextOk, put=set_IsContextOk)) bool  IsContextOk;

 __declspec(property(get=get_ActivationType)) ::System::Type*  ActivationType;

 __declspec(property(get=get_ActivationTypeName)) ::StringW  ActivationTypeName;

 __declspec(property(get=get_Activator, put=set_Activator)) ::System::Runtime::Remoting::Activation::IActivator*  Activator;

 __declspec(property(get=get_CallSiteActivationAttributes)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  CallSiteActivationAttributes;

 __declspec(property(get=get_ContextProperties)) ::System::Collections::IList*  ContextProperties;

 __declspec(property(get=get_Properties)) ::System::Collections::IDictionary*  Properties;

 __declspec(property(get=get_SourceProxy, put=set_SourceProxy)) ::System::Runtime::Remoting::Proxies::RemotingProxy*  SourceProxy;

/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IConstructionCallMessage"
constexpr operator  ::System::Runtime::Remoting::Activation::IConstructionCallMessage*() noexcept;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

constexpr void __set__activator(::System::Runtime::Remoting::Activation::IActivator*  value) ;

constexpr ::System::Runtime::Remoting::Activation::IActivator* __get__activator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Activation::IActivator*> __get__activator() const;

constexpr void __set__activationAttributes(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get__activationAttributes() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get__activationAttributes() const;

constexpr void __set__contextProperties(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get__contextProperties() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get__contextProperties() const;

constexpr void __set__activationType(::System::Type*  value) ;

constexpr ::System::Type* __get__activationType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__activationType() const;

constexpr void __set__activationTypeName(::StringW  value) ;

constexpr ::StringW& __get__activationTypeName() ;

constexpr ::StringW const& __get__activationTypeName() const;

constexpr void __set__isContextOk(bool  value) ;

constexpr bool& __get__isContextOk() ;

constexpr bool const& __get__isContextOk() const;

constexpr void __set__sourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy*  value) ;

constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy* __get__sourceProxy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Proxies::RemotingProxy*> __get__sourceProxy() const;

static inline ::System::Runtime::Remoting::Messaging::ConstructionCall* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor addr 0x2497c38 size 0x50 virtual false final false
inline void _ctor(::System::Type*  type) ;

static inline ::System::Runtime::Remoting::Messaging::ConstructionCall* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24ab094 size 0x4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method InitDictionary addr 0x24ab130 size 0x84 virtual true final false
inline void InitDictionary() ;

/// @brief Method get_IsContextOk addr 0x24ab260 size 0x8 virtual false final false
inline bool get_IsContextOk() ;

/// @brief Method set_IsContextOk addr 0x24ab268 size 0xc virtual false final false
inline void set_IsContextOk(bool  value) ;

/// @brief Method get_ActivationType addr 0x24ab274 size 0xc8 virtual true final true
inline ::System::Type* get_ActivationType() ;

/// @brief Method get_ActivationTypeName addr 0x24ab33c size 0x8 virtual true final true
inline ::StringW get_ActivationTypeName() ;

/// @brief Method get_Activator addr 0x24ab344 size 0x8 virtual true final true
inline ::System::Runtime::Remoting::Activation::IActivator* get_Activator() ;

/// @brief Method set_Activator addr 0x24ab34c size 0x8 virtual true final true
inline void set_Activator(::System::Runtime::Remoting::Activation::IActivator*  value) ;

/// @brief Method get_CallSiteActivationAttributes addr 0x24ab354 size 0x8 virtual true final true
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> get_CallSiteActivationAttributes() ;

/// @brief Method SetActivationAttributes addr 0x24ab35c size 0x8 virtual false final false
inline void SetActivationAttributes(::ArrayW<::System::Object*,::Array<::System::Object*>*>  attributes) ;

/// @brief Method get_ContextProperties addr 0x24ab364 size 0x6c virtual true final true
inline ::System::Collections::IList* get_ContextProperties() ;

/// @brief Method InitMethodProperty addr 0x24ab3d0 size 0x2b0 virtual true final false
inline void InitMethodProperty(::StringW  key, ::System::Object*  value) ;

/// @brief Method GetObjectData addr 0x24aba9c size 0x198 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Properties addr 0x24ac0c4 size 0x30 virtual true final false
inline ::System::Collections::IDictionary* get_Properties() ;

/// @brief Method get_SourceProxy addr 0x24ac124 size 0x8 virtual false final false
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy() ;

/// @brief Method set_SourceProxy addr 0x24ac12c size 0x8 virtual false final false
inline void set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstructionCall(ConstructionCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstructionCall(ConstructionCall const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConstructionCall()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ConstructionCall, 0xa0>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionCall*, "System.Runtime.Remoting.Messaging", "ConstructionCall");
