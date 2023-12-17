#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FPSCounterUIController)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class FPSCounter;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __FPSCounterUIController___Start_d__9;
}
namespace TMPro {
class TextMeshProUGUI;
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
class FPSCounterUIController;
}
namespace GlobalNamespace {
class __FPSCounterUIController___Start_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FPSCounterUIController);
MARK_REF_PTR_T(::GlobalNamespace::__FPSCounterUIController___Start_d__9);
// Type: ::<Start>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5367))
// CS Name: ::FPSCounterUIController::<Start>d__9*
class CORDL_TYPE __FPSCounterUIController___Start_d__9 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::FPSCounterUIController*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::FPSCounterUIController*  value) ;

constexpr ::GlobalNamespace::FPSCounterUIController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FPSCounterUIController*> __get___4__this() const;

static inline ::GlobalNamespace::__FPSCounterUIController___Start_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x226c7d8 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x226c954 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x226c958 size 0x94 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x226c9ec size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x226c9f4 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x226ca34 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__FPSCounterUIController___Start_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FPSCounterUIController___Start_d__9(__FPSCounterUIController___Start_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FPSCounterUIController___Start_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FPSCounterUIController___Start_d__9(__FPSCounterUIController___Start_d__9 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FPSCounterUIController___Start_d__9()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FPSCounterUIController___Start_d__9, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FPSCounterUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5368))
// CS Name: ::FPSCounterUIController*
class CORDL_TYPE FPSCounterUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__9 = ::GlobalNamespace::__FPSCounterUIController___Start_d__9;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _uiUpdateTimeInterval offset 0x18
 __declspec(property(get=__get__uiUpdateTimeInterval, put=__set__uiUpdateTimeInterval)) float_t  _uiUpdateTimeInterval;

/// @brief Field _currentFPSText offset 0x20
 __declspec(property(get=__get__currentFPSText, put=__set__currentFPSText)) ::TMPro::TextMeshProUGUI*  _currentFPSText;

/// @brief Field _lowestFPSText offset 0x28
 __declspec(property(get=__get__lowestFPSText, put=__set__lowestFPSText)) ::TMPro::TextMeshProUGUI*  _lowestFPSText;

/// @brief Field _highestFPSText offset 0x30
 __declspec(property(get=__get__highestFPSText, put=__set__highestFPSText)) ::TMPro::TextMeshProUGUI*  _highestFPSText;

/// @brief Field _droppedFramesText offset 0x38
 __declspec(property(get=__get__droppedFramesText, put=__set__droppedFramesText)) ::TMPro::TextMeshProUGUI*  _droppedFramesText;

/// @brief Field _gameScenesManager offset 0x40
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _fpsCounter offset 0x48
 __declspec(property(get=__get__fpsCounter, put=__set__fpsCounter)) ::GlobalNamespace::FPSCounter*  _fpsCounter;

/// @brief Field _timeToUpdateUI offset 0x50
 __declspec(property(get=__get__timeToUpdateUI, put=__set__timeToUpdateUI)) float_t  _timeToUpdateUI;

constexpr void __set__uiUpdateTimeInterval(float_t  value) ;

constexpr float_t& __get__uiUpdateTimeInterval() ;

constexpr float_t const& __get__uiUpdateTimeInterval() const;

constexpr void __set__currentFPSText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__currentFPSText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__currentFPSText() const;

constexpr void __set__lowestFPSText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__lowestFPSText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__lowestFPSText() const;

constexpr void __set__highestFPSText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__highestFPSText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__highestFPSText() const;

constexpr void __set__droppedFramesText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__droppedFramesText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__droppedFramesText() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__fpsCounter(::GlobalNamespace::FPSCounter*  value) ;

constexpr ::GlobalNamespace::FPSCounter* __get__fpsCounter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FPSCounter*> __get__fpsCounter() const;

constexpr void __set__timeToUpdateUI(float_t  value) ;

constexpr float_t& __get__timeToUpdateUI() ;

constexpr float_t const& __get__timeToUpdateUI() const;

/// @brief Method Awake addr 0x226c710 size 0x60 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x226c770 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* Start() ;

/// @brief Method LateUpdate addr 0x226c800 size 0x144 virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FPSCounterUIController* New_ctor() ;

/// @brief Method .ctor addr 0x226c944 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FPSCounterUIController(FPSCounterUIController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPSCounterUIController(FPSCounterUIController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FPSCounterUIController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FPSCounterUIController, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FPSCounterUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSCounterUIController*, "", "FPSCounterUIController");
NEED_NO_BOX(::GlobalNamespace::__FPSCounterUIController___Start_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FPSCounterUIController___Start_d__9*, "", "FPSCounterUIController/<Start>d__9");
