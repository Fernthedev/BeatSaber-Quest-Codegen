#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CuttableBySaber)
namespace GlobalNamespace {
class __CuttableBySaber__WasCutBySaberDelegate;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class Saber;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace GlobalNamespace {
class __CuttableBySaber__WasCutBySaberDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CuttableBySaber);
MARK_REF_PTR_T(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate);
// Type: ::WasCutBySaberDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5285))
// CS Name: ::CuttableBySaber::WasCutBySaberDelegate*
class CORDL_TYPE __CuttableBySaber__WasCutBySaberDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x226255c size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x226268c size 0x24 virtual true final false
inline void Invoke(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec) ;

/// @brief Method BeginInvoke addr 0x22626b0 size 0xec virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x226279c size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__CuttableBySaber__WasCutBySaberDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CuttableBySaber__WasCutBySaberDelegate(__CuttableBySaber__WasCutBySaberDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CuttableBySaber__WasCutBySaberDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CuttableBySaber__WasCutBySaberDelegate(__CuttableBySaber__WasCutBySaberDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CuttableBySaber__WasCutBySaberDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CuttableBySaber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5286))
// CS Name: ::CuttableBySaber*
class CORDL_TYPE CuttableBySaber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WasCutBySaberDelegate = ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field wasCutBySaberEvent offset 0x18
 __declspec(property(get=__get_wasCutBySaberEvent, put=__set_wasCutBySaberEvent)) ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*  wasCutBySaberEvent;

 __declspec(property(get=get_canBeCut, put=set_canBeCut)) bool  canBeCut;

 __declspec(property(get=get_radius)) float_t  radius;

constexpr void __set_wasCutBySaberEvent(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*  value) ;

constexpr ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* __get_wasCutBySaberEvent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*> __get_wasCutBySaberEvent() const;

/// @brief Method add_wasCutBySaberEvent addr 0x2262424 size 0x9c virtual false final false
inline void add_wasCutBySaberEvent(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*  value) ;

/// @brief Method remove_wasCutBySaberEvent addr 0x22624c0 size 0x9c virtual false final false
inline void remove_wasCutBySaberEvent(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*  value) ;

/// @brief Method CallWasCutBySaberEvent addr 0x2262390 size 0x2c virtual false final false
inline void CallWasCutBySaberEvent(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec) ;

/// @brief Method get_canBeCut addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_canBeCut() ;

/// @brief Method set_canBeCut addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_canBeCut(bool  value) ;

/// @brief Method get_radius addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_radius() ;

/// @brief Method Cut addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Cut(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec) ;

static inline ::GlobalNamespace::CuttableBySaber* New_ctor() ;

/// @brief Method .ctor addr 0x226241c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CuttableBySaber(CuttableBySaber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuttableBySaber(CuttableBySaber const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CuttableBySaber()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CuttableBySaber, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttableBySaber*, "", "CuttableBySaber");
NEED_NO_BOX(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*, "", "CuttableBySaber/WasCutBySaberDelegate");
