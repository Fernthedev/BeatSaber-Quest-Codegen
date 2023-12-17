#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CurveNodeData)
namespace UnityEngine {
struct Quaternion;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class CurveNodeData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::CurveNodeData);
// Type: HoudiniEngineUnity::CurveNodeData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9619))
// CS Name: ::HoudiniEngineUnity::CurveNodeData*
class CORDL_TYPE CurveNodeData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field position offset 0x10
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation offset 0x1c
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Vector3  rotation;

/// @brief Field scale offset 0x28
 __declspec(property(get=__get_scale, put=__set_scale)) ::UnityEngine::Vector3  scale;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>*() noexcept;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_rotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_rotation() ;

constexpr ::UnityEngine::Vector3 const& __get_rotation() const;

constexpr void __set_scale(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_scale() ;

constexpr ::UnityEngine::Vector3 const& __get_scale() const;

static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor() ;

/// @brief Method .ctor addr 0x2150ae0 size 0xa8 virtual false final false
inline void _ctor() ;

static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::UnityEngine::Vector3  position) ;

/// @brief Method .ctor addr 0x2150b88 size 0xd0 virtual false final false
inline void _ctor(::UnityEngine::Vector3  position) ;

static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method .ctor addr 0x2150c58 size 0x12c virtual false final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

/// @brief Method .ctor addr 0x2150d84 size 0x138 virtual false final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::HoudiniEngineUnity::CurveNodeData*  other) ;

/// @brief Method .ctor addr 0x2150ebc size 0xf0 virtual false final false
inline void _ctor(::HoudiniEngineUnity::CurveNodeData*  other) ;

/// @brief Method GetRotation addr 0x2150fac size 0x24 virtual false final false
inline ::UnityEngine::Quaternion GetRotation() ;

/// @brief Method IsEquivalentTo addr 0x2150fd0 size 0x1ac virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::CurveNodeData*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "CurveNodeData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveNodeData(CurveNodeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveNodeData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveNodeData(CurveNodeData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CurveNodeData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::CurveNodeData, 0x38>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::CurveNodeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::CurveNodeData*, "HoudiniEngineUnity", "CurveNodeData");
