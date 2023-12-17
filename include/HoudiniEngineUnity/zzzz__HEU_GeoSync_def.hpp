#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_GeoSync)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoSync;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeoSync);
// Type: HoudiniEngineUnity::HEU_GeoSync
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9793))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9795))
// CS Name: ::HoudiniEngineUnity::HEU_GeoSync*
class CORDL_TYPE HEU_GeoSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::HoudiniEngineUnity::HEU_BaseSync)]{};

/// @brief Field _filePath offset 0x80
 __declspec(property(get=__get__filePath, put=__set__filePath)) ::StringW  _filePath;

constexpr void __set__filePath(::StringW  value) ;

constexpr ::StringW& __get__filePath() ;

constexpr ::StringW const& __get__filePath() const;

/// @brief Method SetupLoadTask addr 0x21a9f68 size 0x98 virtual true final false
inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase*  session) ;

static inline ::HoudiniEngineUnity::HEU_GeoSync* New_ctor() ;

/// @brief Method .ctor addr 0x21aa014 size 0x4c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_GeoSync(HEU_GeoSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_GeoSync(HEU_GeoSync const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_GeoSync()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeoSync, 0x88>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoSync*, "HoudiniEngineUnity", "HEU_GeoSync");
