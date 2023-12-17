#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderWarmupSceneStart)
namespace GlobalNamespace {
class __ShaderWarmupSceneStart___Start_d__2;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupSceneStart;
}
namespace GlobalNamespace {
class __ShaderWarmupSceneStart___Start_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderWarmupSceneStart);
MARK_REF_PTR_T(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2);
// Type: ::<Start>d__2
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6083))
// CS Name: ::ShaderWarmupSceneStart::<Start>d__2*
class CORDL_TYPE __ShaderWarmupSceneStart___Start_d__2 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::ShaderWarmupSceneStart*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::ShaderWarmupSceneStart*  value) ;

constexpr ::GlobalNamespace::ShaderWarmupSceneStart* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShaderWarmupSceneStart*> __get___4__this() const;

static inline ::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x23201c0 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x23201f0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x23201f4 size 0x90 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2320284 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x232028c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23202cc size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__ShaderWarmupSceneStart___Start_d__2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ShaderWarmupSceneStart___Start_d__2(__ShaderWarmupSceneStart___Start_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ShaderWarmupSceneStart___Start_d__2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ShaderWarmupSceneStart___Start_d__2(__ShaderWarmupSceneStart___Start_d__2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ShaderWarmupSceneStart___Start_d__2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ShaderWarmupSceneStart
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6084))
// CS Name: ::ShaderWarmupSceneStart*
class CORDL_TYPE ShaderWarmupSceneStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__2 = ::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _sceneSetupData offset 0x18
 __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData)) ::GlobalNamespace::ShaderWarmupSceneSetupData*  _sceneSetupData;

/// @brief Field _gameScenesManager offset 0x20
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

constexpr void __set__sceneSetupData(::GlobalNamespace::ShaderWarmupSceneSetupData*  value) ;

constexpr ::GlobalNamespace::ShaderWarmupSceneSetupData* __get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShaderWarmupSceneSetupData*> __get__sceneSetupData() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

/// @brief Method Start addr 0x2320158 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* Start() ;

static inline ::GlobalNamespace::ShaderWarmupSceneStart* New_ctor() ;

/// @brief Method .ctor addr 0x23201e8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneStart", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderWarmupSceneStart(ShaderWarmupSceneStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneStart", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderWarmupSceneStart(ShaderWarmupSceneStart const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ShaderWarmupSceneStart()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderWarmupSceneStart, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneStart*, "", "ShaderWarmupSceneStart");
NEED_NO_BOX(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2*, "", "ShaderWarmupSceneStart/<Start>d__2");
