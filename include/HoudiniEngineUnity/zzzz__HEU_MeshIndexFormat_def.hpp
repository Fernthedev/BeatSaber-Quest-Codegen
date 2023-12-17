#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_MeshIndexFormat)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MeshIndexFormat;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_MeshIndexFormat);
// Type: HoudiniEngineUnity::HEU_MeshIndexFormat
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9852))
// CS Name: ::HoudiniEngineUnity::HEU_MeshIndexFormat*
class CORDL_TYPE HEU_MeshIndexFormat : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _indexFormat offset 0x10
 __declspec(property(get=__get__indexFormat, put=__set__indexFormat)) ::UnityEngine::Rendering::IndexFormat  _indexFormat;

constexpr void __set__indexFormat(::UnityEngine::Rendering::IndexFormat  value) ;

constexpr ::UnityEngine::Rendering::IndexFormat& __get__indexFormat() ;

constexpr ::UnityEngine::Rendering::IndexFormat const& __get__indexFormat() const;

/// @brief Method CalculateIndexFormat addr 0x21d01a8 size 0x78 virtual false final false
inline void CalculateIndexFormat(int32_t  numVertices) ;

/// @brief Method SetFormatForMesh addr 0x21d0220 size 0x24 virtual false final false
inline void SetFormatForMesh(::UnityEngine::Mesh*  mesh) ;

static inline ::HoudiniEngineUnity::HEU_MeshIndexFormat* New_ctor() ;

/// @brief Method .ctor addr 0x21d0244 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_MeshIndexFormat(HEU_MeshIndexFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_MeshIndexFormat(HEU_MeshIndexFormat const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_MeshIndexFormat()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MeshIndexFormat, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MeshIndexFormat);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MeshIndexFormat*, "HoudiniEngineUnity", "HEU_MeshIndexFormat");
