#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgesProvider)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
namespace GlobalNamespace {
class __MultiplayerBadgesProvider____c;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace GlobalNamespace {
class __MultiplayerBadgesProvider____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgesProvider);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerBadgesProvider____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5112))
// CS Name: ::MultiplayerBadgesProvider::<>c*
class CORDL_TYPE __MultiplayerBadgesProvider____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__MultiplayerBadgesProvider____c*  value) ;

static inline ::GlobalNamespace::__MultiplayerBadgesProvider____c* getStaticF___9() ;

static inline void setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*,bool>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*,bool>* getStaticF___9__7_0() ;

static inline void setStaticF___9__7_1(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*,int32_t>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*,int32_t>* getStaticF___9__7_1() ;

static inline ::GlobalNamespace::__MultiplayerBadgesProvider____c* New_ctor() ;

/// @brief Method .ctor addr 0x23d0f68 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_0 addr 0x23d0f70 size 0x20 virtual false final false
inline bool _SelectBadgesAndPutThemIntoResults_b__7_0(::GlobalNamespace::MultiplayerPlayerResultsData*  result) ;

/// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_1 addr 0x23d0f90 size 0x28 virtual false final false
inline int32_t _SelectBadgesAndPutThemIntoResults_b__7_1(::GlobalNamespace::MultiplayerPlayerResultsData*  p) ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerBadgesProvider____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerBadgesProvider____c(__MultiplayerBadgesProvider____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerBadgesProvider____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerBadgesProvider____c(__MultiplayerBadgesProvider____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerBadgesProvider____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__7_0

// Static field <>9__7_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerBadgesProvider____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerBadgesProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5113))
// CS Name: ::MultiplayerBadgesProvider*
class CORDL_TYPE MultiplayerBadgesProvider : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__MultiplayerBadgesProvider____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field kTargetPositiveBadgesCount offset 0x0
static constexpr int32_t  kTargetPositiveBadgesCount{static_cast<int32_t>(0x2)};

/// @brief Field kTargetNegativeBadgesCount offset 0x0
static constexpr int32_t  kTargetNegativeBadgesCount{static_cast<int32_t>(0x1)};

/// @brief Field kMinRandomMultiplierAmount offset 0x0
static constexpr float_t  kMinRandomMultiplierAmount{0.8};

/// @brief Field kMaxRandomMultiplierAmount offset 0x0
static constexpr float_t  kMaxRandomMultiplierAmount{1.2};

/// @brief Field _playerDataModel offset 0x10
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _difficultyBeatmap offset 0x18
 __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  _difficultyBeatmap;

/// @brief Field _multiplayerBadgesModel offset 0x20
 __declspec(property(get=__get__multiplayerBadgesModel, put=__set__multiplayerBadgesModel)) ::GlobalNamespace::MultiplayerBadgesModelSO*  _multiplayerBadgesModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get__difficultyBeatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get__difficultyBeatmap() const;

constexpr void __set__multiplayerBadgesModel(::GlobalNamespace::MultiplayerBadgesModelSO*  value) ;

constexpr ::GlobalNamespace::MultiplayerBadgesModelSO* __get__multiplayerBadgesModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgesModelSO*> __get__multiplayerBadgesModel() const;

/// @brief Method SelectBadgesAndPutThemIntoResults addr 0x23cfa58 size 0x14a4 virtual false final false
inline void SelectBadgesAndPutThemIntoResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  playerResults) ;

static inline ::GlobalNamespace::MultiplayerBadgesProvider* New_ctor() ;

/// @brief Method .ctor addr 0x23d0efc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgesProvider(MultiplayerBadgesProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgesProvider(MultiplayerBadgesProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgesProvider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgesProvider, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesProvider*, "", "MultiplayerBadgesProvider");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerBadgesProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerBadgesProvider____c*, "", "MultiplayerBadgesProvider/<>c");
