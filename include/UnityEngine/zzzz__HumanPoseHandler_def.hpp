#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HumanPoseHandler)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct HumanPose;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class HumanPoseHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HumanPoseHandler);
// Type: UnityEngine::HumanPoseHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14885))
// CS Name: ::UnityEngine::HumanPoseHandler*
class CORDL_TYPE HumanPoseHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

/// @brief Method Internal_CreateFromRoot addr 0x2c96470 size 0x44 virtual false final false
static inline ::cordl_internals::intptr_t Internal_CreateFromRoot(::UnityEngine::Avatar*  avatar, ::UnityEngine::Transform*  root) ;

/// @brief Method Internal_Destroy addr 0x2c964b4 size 0x3c virtual false final false
static inline void Internal_Destroy(::cordl_internals::intptr_t  ptr) ;

/// @brief Method GetHumanPose addr 0x2c964f0 size 0x5c virtual false final false
inline void GetHumanPose(ByRef<::UnityEngine::Vector3>  bodyPosition, ByRef<::UnityEngine::Quaternion>  bodyRotation, ByRef<::ArrayW<float_t,::Array<float_t>*>>  muscles) ;

/// @brief Method Dispose addr 0x2c9654c size 0xcc virtual true final true
inline void Dispose() ;

static inline ::UnityEngine::HumanPoseHandler* New_ctor(::UnityEngine::Avatar*  avatar, ::UnityEngine::Transform*  root) ;

/// @brief Method .ctor addr 0x2c96618 size 0x22c virtual false final false
inline void _ctor(::UnityEngine::Avatar*  avatar, ::UnityEngine::Transform*  root) ;

/// @brief Method GetHumanPose addr 0x2c96844 size 0xf4 virtual false final false
inline void GetHumanPose(ByRef<::UnityEngine::HumanPose>  humanPose) ;

// Ctor Parameters [CppParam { name: "", ty: "HumanPoseHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HumanPoseHandler(HumanPoseHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HumanPoseHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HumanPoseHandler(HumanPoseHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HumanPoseHandler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanPoseHandler, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::HumanPoseHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanPoseHandler*, "UnityEngine", "HumanPoseHandler");
