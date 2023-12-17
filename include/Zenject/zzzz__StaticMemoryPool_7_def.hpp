#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticMemoryPool_7)
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class Action_7;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class IMemoryPool_7;
}
namespace Zenject {
class IMemoryPool;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class StaticMemoryPool_7;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPool_7);
// Type: Zenject::StaticMemoryPool`7
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11085)), TypeDefinitionIndex(TypeDefinitionIndex(11092)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 189 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11092), inst: 6487 })
// CS Name: ::Zenject::StaticMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPoolBase_1<TValue>)]{};

/// @brief Field _onSpawnMethod offset 0x28
 __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod)) ::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  _onSpawnMethod;

 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  OnSpawnMethod;

/// @brief Convert operator to "::Zenject::IMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>"
constexpr operator  ::Zenject::IMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

constexpr void __set__onSpawnMethod(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

constexpr ::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>* __get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*> __get__onSpawnMethod() const;

static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>* New_ctor(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnSpawnMethod(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_7(StaticMemoryPool_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_7(StaticMemoryPool_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPool_7()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11092)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 189 }), TypeDefinitionIndex(TypeDefinitionIndex(11085))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11092), inst: 6486 })
// CS Name: ::Zenject::StaticMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPoolBase_1<TValue>)]{};

/// @brief Field _onSpawnMethod offset 0x28
 __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod)) ::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  _onSpawnMethod;

 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  OnSpawnMethod;

/// @brief Convert operator to "::Zenject::IMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>"
constexpr operator  ::Zenject::IMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

constexpr void __set__onSpawnMethod(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

constexpr ::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>* __get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*> __get__onSpawnMethod() const;

static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>* New_ctor(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnSpawnMethod(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn(::UnityEngine::Vector2  p1, ::UnityEngine::Vector2  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_7(StaticMemoryPool_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_7(StaticMemoryPool_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPool_7()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11092)), TypeDefinitionIndex(TypeDefinitionIndex(11085)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 189 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11092), inst: 6485 })
// CS Name: ::Zenject::StaticMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPoolBase_1<TValue>)]{};

/// @brief Field _onSpawnMethod offset 0x28
 __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod)) ::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  _onSpawnMethod;

 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  OnSpawnMethod;

/// @brief Convert operator to "::Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>"
constexpr operator  ::Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

constexpr void __set__onSpawnMethod(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

constexpr ::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>* __get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*> __get__onSpawnMethod() const;

static inline ::Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>* New_ctor(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnSpawnMethod(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn(float_t  p1, float_t  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_7(StaticMemoryPool_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_7(StaticMemoryPool_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPool_7()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 189 }), TypeDefinitionIndex(TypeDefinitionIndex(11092)), TypeDefinitionIndex(TypeDefinitionIndex(11085))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11092), inst: 6484 })
// CS Name: ::Zenject::StaticMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPoolBase_1<TValue>)]{};

/// @brief Field _onSpawnMethod offset 0x28
 __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod)) ::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  _onSpawnMethod;

 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  OnSpawnMethod;

/// @brief Convert operator to "::Zenject::IMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>"
constexpr operator  ::Zenject::IMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

constexpr void __set__onSpawnMethod(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

constexpr ::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>* __get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*> __get__onSpawnMethod() const;

static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>* New_ctor(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnSpawnMethod(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn(::UnityEngine::Color  p1, ::UnityEngine::Color  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_7(StaticMemoryPool_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_7(StaticMemoryPool_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPool_7()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11092)), TypeDefinitionIndex(TypeDefinitionIndex(11085)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 189 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11092), inst: 6127 })
// CS Name: ::Zenject::StaticMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPoolBase_1<TValue>)]{};

/// @brief Field _onSpawnMethod offset 0x28
 __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod)) ::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  _onSpawnMethod;

 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  OnSpawnMethod;

/// @brief Convert operator to "::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
constexpr operator  ::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

constexpr void __set__onSpawnMethod(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  value) ;

constexpr ::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>* __get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*> __get__onSpawnMethod() const;

static inline ::Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>* New_ctor(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnSpawnMethod(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5, TParam6  p6) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_7(StaticMemoryPool_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_7(StaticMemoryPool_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPool_7()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_7, "Zenject", "StaticMemoryPool`7");
