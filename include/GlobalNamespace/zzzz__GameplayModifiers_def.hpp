#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifiers)
namespace GlobalNamespace {
struct __GameplayModifiers__EnergyType;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
struct __GameplayModifiers__EnabledObstacleType;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct __GameplayModifiers__SongSpeed;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct __GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct __GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameplayModifiers__EnabledObstacleType);
MARK_VAL_T(::GlobalNamespace::__GameplayModifiers__EnergyType);
MARK_VAL_T(::GlobalNamespace::__GameplayModifiers__SongSpeed);
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiers);
// Type: ::EnabledObstacleType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14999))
// CS Name: ::GameplayModifiers::EnabledObstacleType
struct CORDL_TYPE __GameplayModifiers__EnabledObstacleType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GameplayModifiers__EnabledObstacleType_Unwrapped
enum struct ____GameplayModifiers__EnabledObstacleType_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_FullHeightOnly = static_cast<int32_t>(0x1),
__E_NoObstacles = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field All value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType const All;

/// @brief Field FullHeightOnly value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType const FullHeightOnly;

/// @brief Field NoObstacles value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType const NoObstacles;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____GameplayModifiers__EnabledObstacleType_Unwrapped () const noexcept {
return std::bit_cast<____GameplayModifiers__EnabledObstacleType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GameplayModifiers__EnabledObstacleType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameplayModifiers__EnabledObstacleType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameplayModifiers__EnabledObstacleType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EnergyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15000))
// CS Name: ::GameplayModifiers::EnergyType
struct CORDL_TYPE __GameplayModifiers__EnergyType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GameplayModifiers__EnergyType_Unwrapped
enum struct ____GameplayModifiers__EnergyType_Unwrapped : int32_t {
__E_Bar = static_cast<int32_t>(0x0),
__E_Battery = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Bar value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__GameplayModifiers__EnergyType const Bar;

/// @brief Field Battery value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__GameplayModifiers__EnergyType const Battery;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____GameplayModifiers__EnergyType_Unwrapped () const noexcept {
return std::bit_cast<____GameplayModifiers__EnergyType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GameplayModifiers__EnergyType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameplayModifiers__EnergyType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameplayModifiers__EnergyType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiers__EnergyType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SongSpeed
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15001))
// CS Name: ::GameplayModifiers::SongSpeed
struct CORDL_TYPE __GameplayModifiers__SongSpeed : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GameplayModifiers__SongSpeed_Unwrapped
enum struct ____GameplayModifiers__SongSpeed_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Faster = static_cast<int32_t>(0x1),
__E_Slower = static_cast<int32_t>(0x2),
__E_SuperFast = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__GameplayModifiers__SongSpeed const Normal;

/// @brief Field Faster value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__GameplayModifiers__SongSpeed const Faster;

/// @brief Field Slower value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__GameplayModifiers__SongSpeed const Slower;

/// @brief Field SuperFast value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__GameplayModifiers__SongSpeed const SuperFast;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____GameplayModifiers__SongSpeed_Unwrapped () const noexcept {
return std::bit_cast<____GameplayModifiers__SongSpeed_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GameplayModifiers__SongSpeed(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameplayModifiers__SongSpeed(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameplayModifiers__SongSpeed()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiers__SongSpeed, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameplayModifiers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15002))
// CS Name: ::GameplayModifiers*
class CORDL_TYPE GameplayModifiers : public ::System::Object {
public:
// Declarations
using SongSpeed = ::GlobalNamespace::__GameplayModifiers__SongSpeed;

using EnergyType = ::GlobalNamespace::__GameplayModifiers__EnergyType;

using EnabledObstacleType = ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _energyType offset 0x10
 __declspec(property(get=__get__energyType, put=__set__energyType)) ::GlobalNamespace::__GameplayModifiers__EnergyType  _energyType;

/// @brief Field _noFailOn0Energy offset 0x14
 __declspec(property(get=__get__noFailOn0Energy, put=__set__noFailOn0Energy)) bool  _noFailOn0Energy;

/// @brief Field _instaFail offset 0x15
 __declspec(property(get=__get__instaFail, put=__set__instaFail)) bool  _instaFail;

/// @brief Field _failOnSaberClash offset 0x16
 __declspec(property(get=__get__failOnSaberClash, put=__set__failOnSaberClash)) bool  _failOnSaberClash;

/// @brief Field _enabledObstacleType offset 0x18
 __declspec(property(get=__get__enabledObstacleType, put=__set__enabledObstacleType)) ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  _enabledObstacleType;

/// @brief Field _fastNotes offset 0x1c
 __declspec(property(get=__get__fastNotes, put=__set__fastNotes)) bool  _fastNotes;

/// @brief Field _strictAngles offset 0x1d
 __declspec(property(get=__get__strictAngles, put=__set__strictAngles)) bool  _strictAngles;

/// @brief Field _disappearingArrows offset 0x1e
 __declspec(property(get=__get__disappearingArrows, put=__set__disappearingArrows)) bool  _disappearingArrows;

/// @brief Field _ghostNotes offset 0x1f
 __declspec(property(get=__get__ghostNotes, put=__set__ghostNotes)) bool  _ghostNotes;

/// @brief Field _noBombs offset 0x20
 __declspec(property(get=__get__noBombs, put=__set__noBombs)) bool  _noBombs;

/// @brief Field _songSpeed offset 0x24
 __declspec(property(get=__get__songSpeed, put=__set__songSpeed)) ::GlobalNamespace::__GameplayModifiers__SongSpeed  _songSpeed;

/// @brief Field _noArrows offset 0x28
 __declspec(property(get=__get__noArrows, put=__set__noArrows)) bool  _noArrows;

/// @brief Field _proMode offset 0x29
 __declspec(property(get=__get__proMode, put=__set__proMode)) bool  _proMode;

/// @brief Field _zenMode offset 0x2a
 __declspec(property(get=__get__zenMode, put=__set__zenMode)) bool  _zenMode;

/// @brief Field _smallCubes offset 0x2b
 __declspec(property(get=__get__smallCubes, put=__set__smallCubes)) bool  _smallCubes;

 __declspec(property(get=get_energyType)) ::GlobalNamespace::__GameplayModifiers__EnergyType  energyType;

 __declspec(property(get=get_noFailOn0Energy)) bool  noFailOn0Energy;

 __declspec(property(get=get_instaFail)) bool  instaFail;

 __declspec(property(get=get_failOnSaberClash)) bool  failOnSaberClash;

 __declspec(property(get=get_enabledObstacleType)) ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  enabledObstacleType;

 __declspec(property(get=get_fastNotes)) bool  fastNotes;

 __declspec(property(get=get_strictAngles)) bool  strictAngles;

 __declspec(property(get=get_disappearingArrows)) bool  disappearingArrows;

 __declspec(property(get=get_ghostNotes)) bool  ghostNotes;

 __declspec(property(get=get_noBombs)) bool  noBombs;

 __declspec(property(get=get_songSpeed)) ::GlobalNamespace::__GameplayModifiers__SongSpeed  songSpeed;

 __declspec(property(get=get_noArrows)) bool  noArrows;

 __declspec(property(get=get_proMode)) bool  proMode;

 __declspec(property(get=get_zenMode)) bool  zenMode;

 __declspec(property(get=get_smallCubes)) bool  smallCubes;

 __declspec(property(get=get_songSpeedMul)) float_t  songSpeedMul;

 __declspec(property(get=get_cutAngleTolerance)) float_t  cutAngleTolerance;

 __declspec(property(get=get_notesUniformScale)) float_t  notesUniformScale;

/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>"
constexpr operator  ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*() noexcept;

constexpr void __set__energyType(::GlobalNamespace::__GameplayModifiers__EnergyType  value) ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& __get__energyType() ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& __get__energyType() const;

constexpr void __set__noFailOn0Energy(bool  value) ;

constexpr bool& __get__noFailOn0Energy() ;

constexpr bool const& __get__noFailOn0Energy() const;

constexpr void __set__instaFail(bool  value) ;

constexpr bool& __get__instaFail() ;

constexpr bool const& __get__instaFail() const;

constexpr void __set__failOnSaberClash(bool  value) ;

constexpr bool& __get__failOnSaberClash() ;

constexpr bool const& __get__failOnSaberClash() const;

constexpr void __set__enabledObstacleType(::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  value) ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType& __get__enabledObstacleType() ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType const& __get__enabledObstacleType() const;

constexpr void __set__fastNotes(bool  value) ;

constexpr bool& __get__fastNotes() ;

constexpr bool const& __get__fastNotes() const;

constexpr void __set__strictAngles(bool  value) ;

constexpr bool& __get__strictAngles() ;

constexpr bool const& __get__strictAngles() const;

constexpr void __set__disappearingArrows(bool  value) ;

constexpr bool& __get__disappearingArrows() ;

constexpr bool const& __get__disappearingArrows() const;

constexpr void __set__ghostNotes(bool  value) ;

constexpr bool& __get__ghostNotes() ;

constexpr bool const& __get__ghostNotes() const;

constexpr void __set__noBombs(bool  value) ;

constexpr bool& __get__noBombs() ;

constexpr bool const& __get__noBombs() const;

constexpr void __set__songSpeed(::GlobalNamespace::__GameplayModifiers__SongSpeed  value) ;

constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed& __get__songSpeed() ;

constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed const& __get__songSpeed() const;

constexpr void __set__noArrows(bool  value) ;

constexpr bool& __get__noArrows() ;

constexpr bool const& __get__noArrows() const;

constexpr void __set__proMode(bool  value) ;

constexpr bool& __get__proMode() ;

constexpr bool const& __get__proMode() const;

constexpr void __set__zenMode(bool  value) ;

constexpr bool& __get__zenMode() ;

constexpr bool const& __get__zenMode() const;

constexpr void __set__smallCubes(bool  value) ;

constexpr bool& __get__smallCubes() ;

constexpr bool const& __get__smallCubes() const;

static inline void setStaticF_noModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

static inline ::GlobalNamespace::GameplayModifiers* getStaticF_noModifiers() ;

/// @brief Method get_energyType addr 0x12a2414 size 0x8 virtual false final false
inline ::GlobalNamespace::__GameplayModifiers__EnergyType get_energyType() ;

/// @brief Method get_noFailOn0Energy addr 0x12a241c size 0x8 virtual false final false
inline bool get_noFailOn0Energy() ;

/// @brief Method get_instaFail addr 0x12a2424 size 0x8 virtual false final false
inline bool get_instaFail() ;

/// @brief Method get_failOnSaberClash addr 0x12a242c size 0x8 virtual false final false
inline bool get_failOnSaberClash() ;

/// @brief Method get_enabledObstacleType addr 0x12a2434 size 0x8 virtual false final false
inline ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType get_enabledObstacleType() ;

/// @brief Method get_fastNotes addr 0x12a243c size 0x8 virtual false final false
inline bool get_fastNotes() ;

/// @brief Method get_strictAngles addr 0x12a2444 size 0x8 virtual false final false
inline bool get_strictAngles() ;

/// @brief Method get_disappearingArrows addr 0x12a244c size 0x8 virtual false final false
inline bool get_disappearingArrows() ;

/// @brief Method get_ghostNotes addr 0x12a2454 size 0x8 virtual false final false
inline bool get_ghostNotes() ;

/// @brief Method get_noBombs addr 0x12a245c size 0x8 virtual false final false
inline bool get_noBombs() ;

/// @brief Method get_songSpeed addr 0x12a2464 size 0x8 virtual false final false
inline ::GlobalNamespace::__GameplayModifiers__SongSpeed get_songSpeed() ;

/// @brief Method get_noArrows addr 0x12a246c size 0x8 virtual false final false
inline bool get_noArrows() ;

/// @brief Method get_proMode addr 0x12a2474 size 0x8 virtual false final false
inline bool get_proMode() ;

/// @brief Method get_zenMode addr 0x12a247c size 0x8 virtual false final false
inline bool get_zenMode() ;

/// @brief Method get_smallCubes addr 0x12a2484 size 0x8 virtual false final false
inline bool get_smallCubes() ;

/// @brief Method get_songSpeedMul addr 0x12a248c size 0x24 virtual false final false
inline float_t get_songSpeedMul() ;

/// @brief Method get_cutAngleTolerance addr 0x12a24b0 size 0x20 virtual false final false
inline float_t get_cutAngleTolerance() ;

/// @brief Method get_notesUniformScale addr 0x12a24d0 size 0x18 virtual false final false
inline float_t get_notesUniformScale() ;

static inline ::GlobalNamespace::GameplayModifiers* New_ctor() ;

/// @brief Method .ctor addr 0x12a24e8 size 0x2c virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::GameplayModifiers* New_ctor(::GlobalNamespace::__GameplayModifiers__EnergyType  energyType, bool  noFailOn0Energy, bool  instaFail, bool  failOnSaberClash, ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  enabledObstacleType, bool  noBombs, bool  fastNotes, bool  strictAngles, bool  disappearingArrows, ::GlobalNamespace::__GameplayModifiers__SongSpeed  songSpeed, bool  noArrows, bool  ghostNotes, bool  proMode, bool  zenMode, bool  smallCubes) ;

/// @brief Method .ctor addr 0x12a2268 size 0xf4 virtual false final false
inline void _ctor(::GlobalNamespace::__GameplayModifiers__EnergyType  energyType, bool  noFailOn0Energy, bool  instaFail, bool  failOnSaberClash, ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  enabledObstacleType, bool  noBombs, bool  fastNotes, bool  strictAngles, bool  disappearingArrows, ::GlobalNamespace::__GameplayModifiers__SongSpeed  songSpeed, bool  noArrows, bool  ghostNotes, bool  proMode, bool  zenMode, bool  smallCubes) ;

/// @brief Method CopyWith addr 0x12a2514 size 0x32c virtual false final false
inline ::GlobalNamespace::GameplayModifiers* CopyWith(::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnergyType>  energyType, ::System::Nullable_1<bool>  noFailOn0Energy, ::System::Nullable_1<bool>  instaFail, ::System::Nullable_1<bool>  failOnSaberClash, ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType>  enabledObstacleType, ::System::Nullable_1<bool>  noBombs, ::System::Nullable_1<bool>  fastNotes, ::System::Nullable_1<bool>  strictAngles, ::System::Nullable_1<bool>  disappearingArrows, ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__SongSpeed>  songSpeed, ::System::Nullable_1<bool>  noArrows, ::System::Nullable_1<bool>  ghostNotes, ::System::Nullable_1<bool>  proMode, ::System::Nullable_1<bool>  zenMode, ::System::Nullable_1<bool>  smallCubes) ;

/// @brief Method IsWithoutModifiers addr 0x12a2840 size 0x88 virtual false final false
inline bool IsWithoutModifiers() ;

/// @brief Method Serialize addr 0x12a28c8 size 0xa0 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData addr 0x12a2968 size 0x54 virtual true final true
inline ::GlobalNamespace::GameplayModifiers* LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method CreateFromSerializedData addr 0x12a29bc size 0x144 virtual false final false
static inline ::GlobalNamespace::GameplayModifiers* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader) ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayModifiers(GameplayModifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayModifiers(GameplayModifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayModifiers()  = default;
public:


// Fields

// Static field noModifiers


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiers__EnabledObstacleType, "", "GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiers__EnergyType, "", "GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiers__SongSpeed, "", "GameplayModifiers/SongSpeed");
NEED_NO_BOX(::GlobalNamespace::GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers*, "", "GameplayModifiers");
