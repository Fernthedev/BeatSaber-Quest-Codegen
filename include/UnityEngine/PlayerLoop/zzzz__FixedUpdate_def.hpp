#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FixedUpdate)
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__PhysicsFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__PhysicsClothFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__DirectorFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__DirectorFixedUpdatePostPhysics;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__XRFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__ClearLines;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__NewInputFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__ScriptRunDelayedFixedFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__ScriptRunBehaviourFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__Physics2DFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__DirectorFixedSampleTime;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__AudioFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__LegacyFixedAnimationUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct FixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__AudioFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__ClearLines;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__DirectorFixedSampleTime;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__DirectorFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__DirectorFixedUpdatePostPhysics;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__LegacyFixedAnimationUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__NewInputFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__Physics2DFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__PhysicsClothFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__PhysicsFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__ScriptRunBehaviourFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__ScriptRunDelayedFixedFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct __FixedUpdate__XRFixedUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::FixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__AudioFixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__ClearLines);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedSampleTime);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdatePostPhysics);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__LegacyFixedAnimationUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__NewInputFixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__Physics2DFixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsClothFixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsFixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunBehaviourFixedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunDelayedFixedFrameRate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__FixedUpdate__XRFixedUpdate);
// Type: ::ClearLines
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10517))
// CS Name: ::FixedUpdate::ClearLines
struct CORDL_TYPE __FixedUpdate__ClearLines : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__ClearLines(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__ClearLines()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__ClearLines, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorFixedSampleTime
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10518))
// CS Name: ::FixedUpdate::DirectorFixedSampleTime
struct CORDL_TYPE __FixedUpdate__DirectorFixedSampleTime : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__DirectorFixedSampleTime(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__DirectorFixedSampleTime()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedSampleTime, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::AudioFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10519))
// CS Name: ::FixedUpdate::AudioFixedUpdate
struct CORDL_TYPE __FixedUpdate__AudioFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__AudioFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__AudioFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__AudioFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunBehaviourFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10520))
// CS Name: ::FixedUpdate::ScriptRunBehaviourFixedUpdate
struct CORDL_TYPE __FixedUpdate__ScriptRunBehaviourFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__ScriptRunBehaviourFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__ScriptRunBehaviourFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunBehaviourFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10521))
// CS Name: ::FixedUpdate::DirectorFixedUpdate
struct CORDL_TYPE __FixedUpdate__DirectorFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__DirectorFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__DirectorFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::LegacyFixedAnimationUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10522))
// CS Name: ::FixedUpdate::LegacyFixedAnimationUpdate
struct CORDL_TYPE __FixedUpdate__LegacyFixedAnimationUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__LegacyFixedAnimationUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__LegacyFixedAnimationUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__LegacyFixedAnimationUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::XRFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10523))
// CS Name: ::FixedUpdate::XRFixedUpdate
struct CORDL_TYPE __FixedUpdate__XRFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__XRFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__XRFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__XRFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::PhysicsFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10524))
// CS Name: ::FixedUpdate::PhysicsFixedUpdate
struct CORDL_TYPE __FixedUpdate__PhysicsFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__PhysicsFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__PhysicsFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::Physics2DFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10525))
// CS Name: ::FixedUpdate::Physics2DFixedUpdate
struct CORDL_TYPE __FixedUpdate__Physics2DFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__Physics2DFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__Physics2DFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__Physics2DFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::PhysicsClothFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10526))
// CS Name: ::FixedUpdate::PhysicsClothFixedUpdate
struct CORDL_TYPE __FixedUpdate__PhysicsClothFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__PhysicsClothFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__PhysicsClothFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsClothFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorFixedUpdatePostPhysics
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10527))
// CS Name: ::FixedUpdate::DirectorFixedUpdatePostPhysics
struct CORDL_TYPE __FixedUpdate__DirectorFixedUpdatePostPhysics : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__DirectorFixedUpdatePostPhysics(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__DirectorFixedUpdatePostPhysics()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdatePostPhysics, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedFixedFrameRate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10528))
// CS Name: ::FixedUpdate::ScriptRunDelayedFixedFrameRate
struct CORDL_TYPE __FixedUpdate__ScriptRunDelayedFixedFrameRate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__ScriptRunDelayedFixedFrameRate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__ScriptRunDelayedFixedFrameRate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunDelayedFixedFrameRate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::NewInputFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10529))
// CS Name: ::FixedUpdate::NewInputFixedUpdate
struct CORDL_TYPE __FixedUpdate__NewInputFixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedUpdate__NewInputFixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedUpdate__NewInputFixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__FixedUpdate__NewInputFixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::FixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10530))
// CS Name: ::UnityEngine.PlayerLoop::FixedUpdate
struct CORDL_TYPE FixedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using NewInputFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__NewInputFixedUpdate;

using ScriptRunDelayedFixedFrameRate = ::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunDelayedFixedFrameRate;

using DirectorFixedUpdatePostPhysics = ::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdatePostPhysics;

using PhysicsClothFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsClothFixedUpdate;

using Physics2DFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__Physics2DFixedUpdate;

using PhysicsFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsFixedUpdate;

using XRFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__XRFixedUpdate;

using LegacyFixedAnimationUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__LegacyFixedAnimationUpdate;

using DirectorFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdate;

using ScriptRunBehaviourFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunBehaviourFixedUpdate;

using AudioFixedUpdate = ::UnityEngine::PlayerLoop::__FixedUpdate__AudioFixedUpdate;

using DirectorFixedSampleTime = ::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedSampleTime;

using ClearLines = ::UnityEngine::PlayerLoop::__FixedUpdate__ClearLines;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FixedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FixedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::FixedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::FixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__AudioFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/AudioFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__ClearLines, "UnityEngine.PlayerLoop", "FixedUpdate/ClearLines");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedSampleTime, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedSampleTime");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__DirectorFixedUpdatePostPhysics, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedUpdatePostPhysics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__LegacyFixedAnimationUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/LegacyFixedAnimationUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__NewInputFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/NewInputFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__Physics2DFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/Physics2DFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsClothFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/PhysicsClothFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__PhysicsFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/PhysicsFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunBehaviourFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/ScriptRunBehaviourFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__ScriptRunDelayedFixedFrameRate, "UnityEngine.PlayerLoop", "FixedUpdate/ScriptRunDelayedFixedFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__FixedUpdate__XRFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/XRFixedUpdate");
