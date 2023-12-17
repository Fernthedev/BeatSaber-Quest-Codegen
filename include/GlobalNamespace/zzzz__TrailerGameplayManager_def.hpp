#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrailerGameplayManager)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class __TrailerGameplayManager___Start_d__4;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class TrailerGameplayManager;
}
namespace GlobalNamespace {
class __TrailerGameplayManager___Start_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrailerGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::__TrailerGameplayManager___Start_d__4);
// Type: ::<Start>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5027))
// CS Name: ::TrailerGameplayManager::<Start>d__4*
class CORDL_TYPE __TrailerGameplayManager___Start_d__4 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::TrailerGameplayManager*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::TrailerGameplayManager*  value) ;

constexpr ::GlobalNamespace::TrailerGameplayManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrailerGameplayManager*> __get___4__this() const;

static inline ::GlobalNamespace::__TrailerGameplayManager___Start_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x23bdc98 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x23bdcc8 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x23bdccc size 0xec virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x23bddb8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x23bddc0 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23bde00 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__TrailerGameplayManager___Start_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TrailerGameplayManager___Start_d__4(__TrailerGameplayManager___Start_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TrailerGameplayManager___Start_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TrailerGameplayManager___Start_d__4(__TrailerGameplayManager___Start_d__4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TrailerGameplayManager___Start_d__4()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TrailerGameplayManager___Start_d__4, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TrailerGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5028))
// CS Name: ::TrailerGameplayManager*
class CORDL_TYPE TrailerGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__4 = ::GlobalNamespace::__TrailerGameplayManager___Start_d__4;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _disableMainCamera offset 0x18
 __declspec(property(get=__get__disableMainCamera, put=__set__disableMainCamera)) bool  _disableMainCamera;

/// @brief Field _gameScenesManager offset 0x20
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _gameSongController offset 0x28
 __declspec(property(get=__get__gameSongController, put=__set__gameSongController)) ::GlobalNamespace::GameSongController*  _gameSongController;

/// @brief Field _mainCamera offset 0x30
 __declspec(property(get=__get__mainCamera, put=__set__mainCamera)) ::GlobalNamespace::MainCamera*  _mainCamera;

constexpr void __set__disableMainCamera(bool  value) ;

constexpr bool& __get__disableMainCamera() ;

constexpr bool const& __get__disableMainCamera() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__gameSongController(::GlobalNamespace::GameSongController*  value) ;

constexpr ::GlobalNamespace::GameSongController* __get__gameSongController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> __get__gameSongController() const;

constexpr void __set__mainCamera(::GlobalNamespace::MainCamera*  value) ;

constexpr ::GlobalNamespace::MainCamera* __get__mainCamera() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> __get__mainCamera() const;

/// @brief Method Start addr 0x23bdc30 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* Start() ;

static inline ::GlobalNamespace::TrailerGameplayManager* New_ctor() ;

/// @brief Method .ctor addr 0x23bdcc0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrailerGameplayManager(TrailerGameplayManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrailerGameplayManager(TrailerGameplayManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrailerGameplayManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrailerGameplayManager, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrailerGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailerGameplayManager*, "", "TrailerGameplayManager");
NEED_NO_BOX(::GlobalNamespace::__TrailerGameplayManager___Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TrailerGameplayManager___Start_d__4*, "", "TrailerGameplayManager/<Start>d__4");
