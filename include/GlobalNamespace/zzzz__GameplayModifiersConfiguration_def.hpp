#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameplayModifiersConfiguration)
namespace GlobalNamespace {
class __GameplayModifiersConfiguration__NoteUniformScale;
}
namespace GlobalNamespace {
class __GameplayModifiersConfiguration__SongSpeed;
}
namespace GlobalNamespace {
class __GameplayModifiersConfiguration__CutAngleTolerance;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersConfiguration;
}
namespace GlobalNamespace {
class __GameplayModifiersConfiguration__CutAngleTolerance;
}
namespace GlobalNamespace {
class __GameplayModifiersConfiguration__NoteUniformScale;
}
namespace GlobalNamespace {
class __GameplayModifiersConfiguration__SongSpeed;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersConfiguration);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersConfiguration__CutAngleTolerance);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersConfiguration__NoteUniformScale);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersConfiguration__SongSpeed);
// Type: ::SongSpeed
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15003))
// CS Name: ::GameplayModifiersConfiguration::SongSpeed*
class CORDL_TYPE __GameplayModifiersConfiguration__SongSpeed : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kSlower offset 0x0
static constexpr float_t  kSlower{0.85};

/// @brief Field kNormal offset 0x0
static constexpr float_t  kNormal{1.0};

/// @brief Field kFaster offset 0x0
static constexpr float_t  kFaster{1.2};

/// @brief Field kSuperFast offset 0x0
static constexpr float_t  kSuperFast{1.5};

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersConfiguration__SongSpeed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameplayModifiersConfiguration__SongSpeed(__GameplayModifiersConfiguration__SongSpeed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersConfiguration__SongSpeed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameplayModifiersConfiguration__SongSpeed(__GameplayModifiersConfiguration__SongSpeed const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GameplayModifiersConfiguration__SongSpeed()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersConfiguration__SongSpeed, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CutAngleTolerance
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15004))
// CS Name: ::GameplayModifiersConfiguration::CutAngleTolerance*
class CORDL_TYPE __GameplayModifiersConfiguration__CutAngleTolerance : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kDefault offset 0x0
static constexpr float_t  kDefault{60.0};

/// @brief Field kStrict offset 0x0
static constexpr float_t  kStrict{40.0};

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersConfiguration__CutAngleTolerance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameplayModifiersConfiguration__CutAngleTolerance(__GameplayModifiersConfiguration__CutAngleTolerance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersConfiguration__CutAngleTolerance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameplayModifiersConfiguration__CutAngleTolerance(__GameplayModifiersConfiguration__CutAngleTolerance const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GameplayModifiersConfiguration__CutAngleTolerance()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersConfiguration__CutAngleTolerance, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NoteUniformScale
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15005))
// CS Name: ::GameplayModifiersConfiguration::NoteUniformScale*
class CORDL_TYPE __GameplayModifiersConfiguration__NoteUniformScale : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kDefault offset 0x0
static constexpr float_t  kDefault{1.0};

/// @brief Field kSmall offset 0x0
static constexpr float_t  kSmall{0.5};

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersConfiguration__NoteUniformScale", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameplayModifiersConfiguration__NoteUniformScale(__GameplayModifiersConfiguration__NoteUniformScale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersConfiguration__NoteUniformScale", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameplayModifiersConfiguration__NoteUniformScale(__GameplayModifiersConfiguration__NoteUniformScale const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GameplayModifiersConfiguration__NoteUniformScale()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersConfiguration__NoteUniformScale, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameplayModifiersConfiguration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15006))
// CS Name: ::GameplayModifiersConfiguration*
class CORDL_TYPE GameplayModifiersConfiguration : public ::System::Object {
public:
// Declarations
using NoteUniformScale = ::GlobalNamespace::__GameplayModifiersConfiguration__NoteUniformScale;

using CutAngleTolerance = ::GlobalNamespace::__GameplayModifiersConfiguration__CutAngleTolerance;

using SongSpeed = ::GlobalNamespace::__GameplayModifiersConfiguration__SongSpeed;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayModifiersConfiguration(GameplayModifiersConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayModifiersConfiguration(GameplayModifiersConfiguration const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayModifiersConfiguration()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersConfiguration, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersConfiguration*, "", "GameplayModifiersConfiguration");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersConfiguration__CutAngleTolerance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersConfiguration__CutAngleTolerance*, "", "GameplayModifiersConfiguration/CutAngleTolerance");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersConfiguration__NoteUniformScale);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersConfiguration__NoteUniformScale*, "", "GameplayModifiersConfiguration/NoteUniformScale");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersConfiguration__SongSpeed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersConfiguration__SongSpeed*, "", "GameplayModifiersConfiguration/SongSpeed");
