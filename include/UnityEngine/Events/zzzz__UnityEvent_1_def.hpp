#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityEvent_1)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<::UnityEngine::Color>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::Events {
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
class UnityEvent_1<T0>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0>
class UnityEvent_1<T0>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<bool>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<float_t>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityEvent_1);
// Type: UnityEngine.Events::UnityEvent`1
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 974 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<T0> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<T0>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<T0>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<T0>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<T0>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T0  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 424 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(::UnityEngine::InputSystem::__InputAction__CallbackContext  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 411 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<::UnityEngine::Vector2> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(::UnityEngine::Vector2  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 391 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<float_t> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<float_t>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<float_t>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<float_t>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(float_t  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10461)), TypeDefinitionIndex(TypeDefinitionIndex(10465))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 293 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<::UnityEngine::Color> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(::UnityEngine::Color  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10461)), TypeDefinitionIndex(TypeDefinitionIndex(10465))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 105 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<bool> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<bool>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<bool>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<bool>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(bool  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 98 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<int32_t> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<int32_t>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<int32_t>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<int32_t>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(int32_t  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 2 })
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1<T0> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_1<T0>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_1<T0>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_1<T0>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<T0>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T0  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_1(UnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_1(UnityEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityEvent_1, "UnityEngine.Events", "UnityEvent`1");
