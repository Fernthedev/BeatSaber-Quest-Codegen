#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectPropertyDescriptor)
namespace System::Collections::Specialized {
struct BitVector32;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Diagnostics {
class TraceSwitch;
}
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReflectPropertyDescriptor);
// Type: System.ComponentModel::ReflectPropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9444))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9475))
// CS Name: ::System.ComponentModel::ReflectPropertyDescriptor*
class CORDL_TYPE ReflectPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe0 - sizeof(::System::ComponentModel::PropertyDescriptor)]{};

/// @brief Field state offset 0x84
 __declspec(property(get=__get_state, put=__set_state)) ::System::Collections::Specialized::BitVector32  state;

/// @brief Field componentClass offset 0x88
 __declspec(property(get=__get_componentClass, put=__set_componentClass)) ::System::Type*  componentClass;

/// @brief Field type offset 0x90
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field defaultValue offset 0x98
 __declspec(property(get=__get_defaultValue, put=__set_defaultValue)) ::System::Object*  defaultValue;

/// @brief Field ambientValue offset 0xa0
 __declspec(property(get=__get_ambientValue, put=__set_ambientValue)) ::System::Object*  ambientValue;

/// @brief Field propInfo offset 0xa8
 __declspec(property(get=__get_propInfo, put=__set_propInfo)) ::System::Reflection::PropertyInfo*  propInfo;

/// @brief Field getMethod offset 0xb0
 __declspec(property(get=__get_getMethod, put=__set_getMethod)) ::System::Reflection::MethodInfo*  getMethod;

/// @brief Field setMethod offset 0xb8
 __declspec(property(get=__get_setMethod, put=__set_setMethod)) ::System::Reflection::MethodInfo*  setMethod;

/// @brief Field shouldSerializeMethod offset 0xc0
 __declspec(property(get=__get_shouldSerializeMethod, put=__set_shouldSerializeMethod)) ::System::Reflection::MethodInfo*  shouldSerializeMethod;

/// @brief Field resetMethod offset 0xc8
 __declspec(property(get=__get_resetMethod, put=__set_resetMethod)) ::System::Reflection::MethodInfo*  resetMethod;

/// @brief Field realChangedEvent offset 0xd0
 __declspec(property(get=__get_realChangedEvent, put=__set_realChangedEvent)) ::System::ComponentModel::EventDescriptor*  realChangedEvent;

/// @brief Field receiverType offset 0xd8
 __declspec(property(get=__get_receiverType, put=__set_receiverType)) ::System::Type*  receiverType;

 __declspec(property(get=get_AmbientValue)) ::System::Object*  AmbientValue;

 __declspec(property(get=get_ComponentType)) ::System::Type*  ComponentType;

 __declspec(property(get=get_DefaultValue)) ::System::Object*  DefaultValue;

 __declspec(property(get=get_GetMethodValue)) ::System::Reflection::MethodInfo*  GetMethodValue;

 __declspec(property(get=get_IsExtender)) bool  IsExtender;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_PropertyType)) ::System::Type*  PropertyType;

 __declspec(property(get=get_ResetMethodValue)) ::System::Reflection::MethodInfo*  ResetMethodValue;

 __declspec(property(get=get_SetMethodValue)) ::System::Reflection::MethodInfo*  SetMethodValue;

 __declspec(property(get=get_ShouldSerializeMethodValue)) ::System::Reflection::MethodInfo*  ShouldSerializeMethodValue;

static inline void setStaticF_argsNone(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> getStaticF_argsNone() ;

static inline void setStaticF_noValue(::System::Object*  value) ;

static inline ::System::Object* getStaticF_noValue() ;

static inline void setStaticF_PropDescCreateSwitch(::System::Diagnostics::TraceSwitch*  value) ;

static inline ::System::Diagnostics::TraceSwitch* getStaticF_PropDescCreateSwitch() ;

static inline void setStaticF_PropDescUsageSwitch(::System::Diagnostics::TraceSwitch*  value) ;

static inline ::System::Diagnostics::TraceSwitch* getStaticF_PropDescUsageSwitch() ;

static inline void setStaticF_BitDefaultValueQueried(int32_t  value) ;

static inline int32_t getStaticF_BitDefaultValueQueried() ;

static inline void setStaticF_BitGetQueried(int32_t  value) ;

static inline int32_t getStaticF_BitGetQueried() ;

static inline void setStaticF_BitSetQueried(int32_t  value) ;

static inline int32_t getStaticF_BitSetQueried() ;

static inline void setStaticF_BitShouldSerializeQueried(int32_t  value) ;

static inline int32_t getStaticF_BitShouldSerializeQueried() ;

static inline void setStaticF_BitResetQueried(int32_t  value) ;

static inline int32_t getStaticF_BitResetQueried() ;

static inline void setStaticF_BitChangedQueried(int32_t  value) ;

static inline int32_t getStaticF_BitChangedQueried() ;

static inline void setStaticF_BitIPropChangedQueried(int32_t  value) ;

static inline int32_t getStaticF_BitIPropChangedQueried() ;

static inline void setStaticF_BitReadOnlyChecked(int32_t  value) ;

static inline int32_t getStaticF_BitReadOnlyChecked() ;

static inline void setStaticF_BitAmbientValueQueried(int32_t  value) ;

static inline int32_t getStaticF_BitAmbientValueQueried() ;

static inline void setStaticF_BitSetOnDemand(int32_t  value) ;

static inline int32_t getStaticF_BitSetOnDemand() ;

constexpr void __set_state(::System::Collections::Specialized::BitVector32  value) ;

constexpr ::System::Collections::Specialized::BitVector32& __get_state() ;

constexpr ::System::Collections::Specialized::BitVector32 const& __get_state() const;

constexpr void __set_componentClass(::System::Type*  value) ;

constexpr ::System::Type* __get_componentClass() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_componentClass() const;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_defaultValue(::System::Object*  value) ;

constexpr ::System::Object* __get_defaultValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_defaultValue() const;

constexpr void __set_ambientValue(::System::Object*  value) ;

constexpr ::System::Object* __get_ambientValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_ambientValue() const;

constexpr void __set_propInfo(::System::Reflection::PropertyInfo*  value) ;

constexpr ::System::Reflection::PropertyInfo* __get_propInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> __get_propInfo() const;

constexpr void __set_getMethod(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_getMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_getMethod() const;

constexpr void __set_setMethod(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_setMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_setMethod() const;

constexpr void __set_shouldSerializeMethod(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_shouldSerializeMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_shouldSerializeMethod() const;

constexpr void __set_resetMethod(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_resetMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_resetMethod() const;

constexpr void __set_realChangedEvent(::System::ComponentModel::EventDescriptor*  value) ;

constexpr ::System::ComponentModel::EventDescriptor* __get_realChangedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::EventDescriptor*> __get_realChangedEvent() const;

constexpr void __set_receiverType(::System::Type*  value) ;

constexpr ::System::Type* __get_receiverType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_receiverType() const;

static inline ::System::ComponentModel::ReflectPropertyDescriptor* New_ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method .ctor addr 0x291ede8 size 0x2f0 virtual false final false
inline void _ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

static inline ::System::ComponentModel::ReflectPropertyDescriptor* New_ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::System::Reflection::PropertyInfo*  propInfo, ::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attrs) ;

/// @brief Method .ctor addr 0x291f0d8 size 0x120 virtual false final false
inline void _ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::System::Reflection::PropertyInfo*  propInfo, ::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attrs) ;

static inline ::System::ComponentModel::ReflectPropertyDescriptor* New_ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::System::Type*  receiverType, ::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attrs) ;

/// @brief Method .ctor addr 0x291f1f8 size 0xcc virtual false final false
inline void _ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::System::Type*  receiverType, ::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attrs) ;

/// @brief Method get_AmbientValue addr 0x291f2c4 size 0x17c virtual false final false
inline ::System::Object* get_AmbientValue() ;

/// @brief Method get_ComponentType addr 0x291f440 size 0x8 virtual true final false
inline ::System::Type* get_ComponentType() ;

/// @brief Method get_DefaultValue addr 0x291f448 size 0x290 virtual false final false
inline ::System::Object* get_DefaultValue() ;

/// @brief Method get_GetMethodValue addr 0x291f6d8 size 0x43c virtual false final false
inline ::System::Reflection::MethodInfo* get_GetMethodValue() ;

/// @brief Method get_IsExtender addr 0x291fb14 size 0x60 virtual false final false
inline bool get_IsExtender() ;

/// @brief Method get_IsReadOnly addr 0x291fb74 size 0x100 virtual true final false
inline bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x2920178 size 0x8 virtual true final false
inline ::System::Type* get_PropertyType() ;

/// @brief Method get_ResetMethodValue addr 0x2920180 size 0x208 virtual false final false
inline ::System::Reflection::MethodInfo* get_ResetMethodValue() ;

/// @brief Method get_SetMethodValue addr 0x291fc74 size 0x504 virtual false final false
inline ::System::Reflection::MethodInfo* get_SetMethodValue() ;

/// @brief Method get_ShouldSerializeMethodValue addr 0x2920388 size 0x208 virtual false final false
inline ::System::Reflection::MethodInfo* get_ShouldSerializeMethodValue() ;

/// @brief Method ExtenderCanResetValue addr 0x2920590 size 0x284 virtual false final false
inline bool ExtenderCanResetValue(::System::ComponentModel::IExtenderProvider*  provider, ::System::Object*  component) ;

/// @brief Method ExtenderGetReceiverType addr 0x2920944 size 0x8 virtual false final false
inline ::System::Type* ExtenderGetReceiverType() ;

/// @brief Method ExtenderGetType addr 0x292094c size 0x10 virtual false final false
inline ::System::Type* ExtenderGetType(::System::ComponentModel::IExtenderProvider*  provider) ;

/// @brief Method ExtenderGetValue addr 0x2920814 size 0x130 virtual false final false
inline ::System::Object* ExtenderGetValue(::System::ComponentModel::IExtenderProvider*  provider, ::System::Object*  component) ;

/// @brief Method ExtenderResetValue addr 0x292095c size 0x514 virtual false final false
inline void ExtenderResetValue(::System::ComponentModel::IExtenderProvider*  provider, ::System::Object*  component, ::System::ComponentModel::PropertyDescriptor*  notifyDesc) ;

/// @brief Method ExtenderSetValue addr 0x2920e70 size 0x460 virtual false final false
inline void ExtenderSetValue(::System::ComponentModel::IExtenderProvider*  provider, ::System::Object*  component, ::System::Object*  value, ::System::ComponentModel::PropertyDescriptor*  notifyDesc) ;

/// @brief Method ExtenderShouldSerializeValue addr 0x29212d0 size 0x430 virtual false final false
inline bool ExtenderShouldSerializeValue(::System::ComponentModel::IExtenderProvider*  provider, ::System::Object*  component) ;

/// @brief Method CanResetValue addr 0x2921700 size 0x274 virtual true final false
inline bool CanResetValue(::System::Object*  component) ;

/// @brief Method FillAttributes addr 0x2921974 size 0xab8 virtual true final false
inline void FillAttributes(::System::Collections::IList*  attributes) ;

/// @brief Method GetValue addr 0x2922588 size 0x3c8 virtual true final false
inline ::System::Object* GetValue(::System::Object*  component) ;

/// @brief Method OnValueChanged addr 0x2922950 size 0xa8 virtual true final false
inline void OnValueChanged(::System::Object*  component, ::System::EventArgs*  e) ;

/// @brief Method ResetValue addr 0x29229f8 size 0x454 virtual true final false
inline void ResetValue(::System::Object*  component) ;

/// @brief Method SetValue addr 0x2922e4c size 0x5dc virtual true final false
inline void SetValue(::System::Object*  component, ::System::Object*  value) ;

/// @brief Method ShouldSerializeValue addr 0x2923428 size 0x328 virtual true final false
inline bool ShouldSerializeValue(::System::Object*  component) ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectPropertyDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectPropertyDescriptor(ReflectPropertyDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectPropertyDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectPropertyDescriptor(ReflectPropertyDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectPropertyDescriptor()  = default;
public:


// Fields

// Static field argsNone

// Static field noValue

// Static field PropDescCreateSwitch

// Static field PropDescUsageSwitch

// Static field BitDefaultValueQueried

// Static field BitGetQueried

// Static field BitSetQueried

// Static field BitShouldSerializeQueried

// Static field BitResetQueried

// Static field BitChangedQueried

// Static field BitIPropChangedQueried

// Static field BitReadOnlyChecked

// Static field BitAmbientValueQueried

// Static field BitSetOnDemand


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReflectPropertyDescriptor, 0xe0>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReflectPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectPropertyDescriptor*, "System.ComponentModel", "ReflectPropertyDescriptor");
