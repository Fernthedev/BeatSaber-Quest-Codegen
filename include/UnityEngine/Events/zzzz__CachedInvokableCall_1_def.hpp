#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__InvokableCall_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CachedInvokableCall_1)
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T>
class CachedInvokableCall_1;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T>
class CachedInvokableCall_1<T>;
}
namespace UnityEngine::Events {
template<>
class CachedInvokableCall_1<bool>;
}
namespace UnityEngine::Events {
template<>
class CachedInvokableCall_1<float_t>;
}
namespace UnityEngine::Events {
template<>
class CachedInvokableCall_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::CachedInvokableCall_1);
// Type: UnityEngine.Events::CachedInvokableCall`1
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10456)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 3926 }), TypeDefinitionIndex(TypeDefinitionIndex(10452))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10456), inst: 391 })
// CS Name: ::UnityEngine.Events::CachedInvokableCall`1<T>*
class CORDL_TYPE CachedInvokableCall_1<float_t> : public ::UnityEngine::Events::InvokableCall_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Events::InvokableCall_1<float_t>)]{};

/// @brief Field m_Arg1 offset 0x18
 __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1)) float_t  m_Arg1;

constexpr void __set_m_Arg1(float_t  value) ;

constexpr float_t& __get_m_Arg1() ;

constexpr float_t const& __get_m_Arg1() const;

static inline ::UnityEngine::Events::CachedInvokableCall_1<float_t>* New_ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, float_t  argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, float_t  argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(float_t  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedInvokableCall_1(CachedInvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedInvokableCall_1(CachedInvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CachedInvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10452)), TypeDefinitionIndex(TypeDefinitionIndex(10456)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 3926 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10456), inst: 105 })
// CS Name: ::UnityEngine.Events::CachedInvokableCall`1<T>*
class CORDL_TYPE CachedInvokableCall_1<bool> : public ::UnityEngine::Events::InvokableCall_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Events::InvokableCall_1<bool>)]{};

/// @brief Field m_Arg1 offset 0x18
 __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1)) bool  m_Arg1;

constexpr void __set_m_Arg1(bool  value) ;

constexpr bool& __get_m_Arg1() ;

constexpr bool const& __get_m_Arg1() const;

static inline ::UnityEngine::Events::CachedInvokableCall_1<bool>* New_ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, bool  argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, bool  argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedInvokableCall_1(CachedInvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedInvokableCall_1(CachedInvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CachedInvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 3926 }), TypeDefinitionIndex(TypeDefinitionIndex(10456)), TypeDefinitionIndex(TypeDefinitionIndex(10452))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10456), inst: 98 })
// CS Name: ::UnityEngine.Events::CachedInvokableCall`1<T>*
class CORDL_TYPE CachedInvokableCall_1<int32_t> : public ::UnityEngine::Events::InvokableCall_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Events::InvokableCall_1<int32_t>)]{};

/// @brief Field m_Arg1 offset 0x18
 __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1)) int32_t  m_Arg1;

constexpr void __set_m_Arg1(int32_t  value) ;

constexpr int32_t& __get_m_Arg1() ;

constexpr int32_t const& __get_m_Arg1() const;

static inline ::UnityEngine::Events::CachedInvokableCall_1<int32_t>* New_ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, int32_t  argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, int32_t  argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedInvokableCall_1(CachedInvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedInvokableCall_1(CachedInvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CachedInvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10452)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 3926 }), TypeDefinitionIndex(TypeDefinitionIndex(10456))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10456), inst: 2 })
// CS Name: ::UnityEngine.Events::CachedInvokableCall`1<T>*
class CORDL_TYPE CachedInvokableCall_1<T> : public ::UnityEngine::Events::InvokableCall_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Events::InvokableCall_1<T>)]{};

/// @brief Field m_Arg1 offset 0x18
 __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1)) T  m_Arg1;

constexpr void __set_m_Arg1(T  value) ;

constexpr T& __get_m_Arg1() ;

constexpr T const& __get_m_Arg1() const;

static inline ::UnityEngine::Events::CachedInvokableCall_1<T>* New_ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, T  argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Object*  target, ::System::Reflection::MethodInfo*  theFunction, T  argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedInvokableCall_1(CachedInvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedInvokableCall_1(CachedInvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CachedInvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::CachedInvokableCall_1, "UnityEngine.Events", "CachedInvokableCall`1");
