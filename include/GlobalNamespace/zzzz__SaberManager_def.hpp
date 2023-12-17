#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberManager)
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class __SaberManager__InitData;
}
namespace GlobalNamespace {
class Saber;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class __SaberManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberManager);
MARK_REF_PTR_T(::GlobalNamespace::__SaberManager__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5295))
// CS Name: ::SaberManager::InitData*
class CORDL_TYPE __SaberManager__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field oneSaberMode offset 0x10
 __declspec(property(get=__get_oneSaberMode, put=__set_oneSaberMode)) bool  oneSaberMode;

/// @brief Field oneSaberType offset 0x14
 __declspec(property(get=__get_oneSaberType, put=__set_oneSaberType)) ::GlobalNamespace::SaberType  oneSaberType;

constexpr void __set_oneSaberMode(bool  value) ;

constexpr bool& __get_oneSaberMode() ;

constexpr bool const& __get_oneSaberMode() const;

constexpr void __set_oneSaberType(::GlobalNamespace::SaberType  value) ;

constexpr ::GlobalNamespace::SaberType& __get_oneSaberType() ;

constexpr ::GlobalNamespace::SaberType const& __get_oneSaberType() const;

static inline ::GlobalNamespace::__SaberManager__InitData* New_ctor(bool  oneSaberMode, ::GlobalNamespace::SaberType  oneSaberType) ;

/// @brief Method .ctor addr 0x22640f8 size 0x30 virtual false final false
inline void _ctor(bool  oneSaberMode, ::GlobalNamespace::SaberType  oneSaberType) ;

// Ctor Parameters [CppParam { name: "", ty: "__SaberManager__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SaberManager__InitData(__SaberManager__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SaberManager__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SaberManager__InitData(__SaberManager__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SaberManager__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SaberManager__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SaberManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5296))
// CS Name: ::SaberManager*
class CORDL_TYPE SaberManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__SaberManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _leftSaber offset 0x18
 __declspec(property(get=__get__leftSaber, put=__set__leftSaber)) ::GlobalNamespace::Saber*  _leftSaber;

/// @brief Field _rightSaber offset 0x20
 __declspec(property(get=__get__rightSaber, put=__set__rightSaber)) ::GlobalNamespace::Saber*  _rightSaber;

/// @brief Field _initData offset 0x28
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__SaberManager__InitData*  _initData;

/// @brief Field _started offset 0x30
 __declspec(property(get=__get__started, put=__set__started)) bool  _started;

/// @brief Field didUpdateSaberPositionsEvent offset 0x38
 __declspec(property(get=__get_didUpdateSaberPositionsEvent, put=__set_didUpdateSaberPositionsEvent)) ::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*  didUpdateSaberPositionsEvent;

 __declspec(property(get=get_leftSaber)) ::GlobalNamespace::Saber*  leftSaber;

 __declspec(property(get=get_rightSaber)) ::GlobalNamespace::Saber*  rightSaber;

 __declspec(property(put=set_disableSabers)) bool  disableSabers;

constexpr void __set__leftSaber(::GlobalNamespace::Saber*  value) ;

constexpr ::GlobalNamespace::Saber* __get__leftSaber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> __get__leftSaber() const;

constexpr void __set__rightSaber(::GlobalNamespace::Saber*  value) ;

constexpr ::GlobalNamespace::Saber* __get__rightSaber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> __get__rightSaber() const;

constexpr void __set__initData(::GlobalNamespace::__SaberManager__InitData*  value) ;

constexpr ::GlobalNamespace::__SaberManager__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberManager__InitData*> __get__initData() const;

constexpr void __set__started(bool  value) ;

constexpr bool& __get__started() ;

constexpr bool const& __get__started() const;

constexpr void __set_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>* __get_didUpdateSaberPositionsEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*> __get_didUpdateSaberPositionsEvent() const;

/// @brief Method get_leftSaber addr 0x2263e98 size 0x8 virtual false final false
inline ::GlobalNamespace::Saber* get_leftSaber() ;

/// @brief Method get_rightSaber addr 0x2263ea0 size 0x8 virtual false final false
inline ::GlobalNamespace::Saber* get_rightSaber() ;

/// @brief Method add_didUpdateSaberPositionsEvent addr 0x2262830 size 0xb0 virtual false final false
inline void add_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*  value) ;

/// @brief Method remove_didUpdateSaberPositionsEvent addr 0x2262968 size 0xb0 virtual false final false
inline void remove_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*  value) ;

/// @brief Method set_disableSabers addr 0x2263ea8 size 0x10 virtual false final false
inline void set_disableSabers(bool  value) ;

/// @brief Method Start addr 0x2263eb8 size 0x1c virtual false final false
inline void Start() ;

/// @brief Method OnDisable addr 0x2263ff8 size 0x4 virtual false final false
inline void OnDisable() ;

/// @brief Method OnEnable addr 0x2263ffc size 0x10 virtual false final false
inline void OnEnable() ;

/// @brief Method Update addr 0x226400c size 0x94 virtual false final false
inline void Update() ;

/// @brief Method SaberForType addr 0x22640a0 size 0x50 virtual false final false
inline ::GlobalNamespace::Saber* SaberForType(::GlobalNamespace::SaberType  saberType) ;

/// @brief Method RefreshSabers addr 0x2263ed4 size 0x124 virtual false final false
inline void RefreshSabers() ;

static inline ::GlobalNamespace::SaberManager* New_ctor() ;

/// @brief Method .ctor addr 0x22640f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberManager(SaberManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberManager(SaberManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberManager, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberManager*, "", "SaberManager");
NEED_NO_BOX(::GlobalNamespace::__SaberManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SaberManager__InitData*, "", "SaberManager/InitData");
