#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionStagesManager)
namespace GlobalNamespace {
class MissionStageLockView;
}
namespace GlobalNamespace {
class __MissionStagesManager____c;
}
namespace GlobalNamespace {
class MissionStage;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStagesManager;
}
namespace GlobalNamespace {
class __MissionStagesManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionStagesManager);
MARK_REF_PTR_T(::GlobalNamespace::__MissionStagesManager____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5553))
// CS Name: ::MissionStagesManager::<>c*
class CORDL_TYPE __MissionStagesManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__MissionStagesManager____c*  value) ;

static inline ::GlobalNamespace::__MissionStagesManager____c* getStaticF___9() ;

static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::MissionStage*,int32_t>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::MissionStage*,int32_t>* getStaticF___9__6_0() ;

static inline ::GlobalNamespace::__MissionStagesManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x22a255c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <InitStages>b__6_0 addr 0x22a2564 size 0x18 virtual false final false
inline int32_t _InitStages_b__6_0(::GlobalNamespace::MissionStage*  stage) ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionStagesManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionStagesManager____c(__MissionStagesManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionStagesManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionStagesManager____c(__MissionStagesManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionStagesManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__6_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionStagesManager____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MissionStagesManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5554))
// CS Name: ::MissionStagesManager*
class CORDL_TYPE MissionStagesManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__MissionStagesManager____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionStageLockView offset 0x18
 __declspec(property(get=__get__missionStageLockView, put=__set__missionStageLockView)) ::GlobalNamespace::MissionStageLockView*  _missionStageLockView;

/// @brief Field _missionStages offset 0x20
 __declspec(property(get=__get__missionStages, put=__set__missionStages)) ::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>  _missionStages;

/// @brief Field _firstLockedMissionStage offset 0x28
 __declspec(property(get=__get__firstLockedMissionStage, put=__set__firstLockedMissionStage)) ::GlobalNamespace::MissionStage*  _firstLockedMissionStage;

 __declspec(property(get=get_firstLockedMissionStage)) ::GlobalNamespace::MissionStage*  firstLockedMissionStage;

constexpr void __set__missionStageLockView(::GlobalNamespace::MissionStageLockView*  value) ;

constexpr ::GlobalNamespace::MissionStageLockView* __get__missionStageLockView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionStageLockView*> __get__missionStageLockView() const;

constexpr void __set__missionStages(::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>& __get__missionStages() ;

constexpr ::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*> const& __get__missionStages() const;

constexpr void __set__firstLockedMissionStage(::GlobalNamespace::MissionStage*  value) ;

constexpr ::GlobalNamespace::MissionStage* __get__firstLockedMissionStage() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionStage*> __get__firstLockedMissionStage() const;

/// @brief Method get_firstLockedMissionStage addr 0x22a23a4 size 0x8 virtual false final false
inline ::GlobalNamespace::MissionStage* get_firstLockedMissionStage() ;

/// @brief Method UpdateFirtsLockedMissionStage addr 0x22a1ad4 size 0x7c virtual false final false
inline void UpdateFirtsLockedMissionStage(int32_t  numberOfClearedMissions) ;

/// @brief Method InitStages addr 0x22a23ac size 0x144 virtual false final false
inline void InitStages() ;

/// @brief Method UpdateStageLockPosition addr 0x22a1d50 size 0xc virtual false final false
inline void UpdateStageLockPosition() ;

/// @brief Method UpdateStageLockPositionAnimated addr 0x229fd08 size 0xf0 virtual false final false
inline void UpdateStageLockPositionAnimated(bool  animated, float_t  animationDuration) ;

/// @brief Method UpdateStageLockText addr 0x22a1b50 size 0xb8 virtual false final false
inline void UpdateStageLockText(int32_t  numberOfClearedMissions) ;

static inline ::GlobalNamespace::MissionStagesManager* New_ctor() ;

/// @brief Method .ctor addr 0x22a24f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionStagesManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionStagesManager(MissionStagesManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionStagesManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionStagesManager(MissionStagesManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionStagesManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionStagesManager, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionStagesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionStagesManager*, "", "MissionStagesManager");
NEED_NO_BOX(::GlobalNamespace::__MissionStagesManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionStagesManager____c*, "", "MissionStagesManager/<>c");
