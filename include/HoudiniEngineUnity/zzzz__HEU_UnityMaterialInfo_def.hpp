#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_UnityMaterialInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_UnityMaterialInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_UnityMaterialInfo);
// Type: HoudiniEngineUnity::HEU_UnityMaterialInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9780))
// CS Name: ::HoudiniEngineUnity::HEU_UnityMaterialInfo*
class CORDL_TYPE HEU_UnityMaterialInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _unityMaterialPath offset 0x10
 __declspec(property(get=__get__unityMaterialPath, put=__set__unityMaterialPath)) ::StringW  _unityMaterialPath;

/// @brief Field _substancePath offset 0x18
 __declspec(property(get=__get__substancePath, put=__set__substancePath)) ::StringW  _substancePath;

/// @brief Field _substanceIndex offset 0x20
 __declspec(property(get=__get__substanceIndex, put=__set__substanceIndex)) int32_t  _substanceIndex;

constexpr void __set__unityMaterialPath(::StringW  value) ;

constexpr ::StringW& __get__unityMaterialPath() ;

constexpr ::StringW const& __get__unityMaterialPath() const;

constexpr void __set__substancePath(::StringW  value) ;

constexpr ::StringW& __get__substancePath() ;

constexpr ::StringW const& __get__substancePath() const;

constexpr void __set__substanceIndex(int32_t  value) ;

constexpr int32_t& __get__substanceIndex() ;

constexpr int32_t const& __get__substanceIndex() const;

static inline ::HoudiniEngineUnity::HEU_UnityMaterialInfo* New_ctor(::StringW  unityMaterialPath, ::StringW  substancePath, int32_t  substanceIndex) ;

/// @brief Method .ctor addr 0x21a19d4 size 0x3c virtual false final false
inline void _ctor(::StringW  unityMaterialPath, ::StringW  substancePath, int32_t  substanceIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_UnityMaterialInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_UnityMaterialInfo(HEU_UnityMaterialInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_UnityMaterialInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_UnityMaterialInfo(HEU_UnityMaterialInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_UnityMaterialInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_UnityMaterialInfo, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_UnityMaterialInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_UnityMaterialInfo*, "HoudiniEngineUnity", "HEU_UnityMaterialInfo");
