#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_NodeSync)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_NodeSync;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_NodeSync);
// Type: HoudiniEngineUnity::HEU_NodeSync
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9793))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9796))
// CS Name: ::HoudiniEngineUnity::HEU_NodeSync*
class CORDL_TYPE HEU_NodeSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::HoudiniEngineUnity::HEU_BaseSync)]{};

/// @brief Field _nodeSaveFilePath offset 0x80
 __declspec(property(get=__get__nodeSaveFilePath, put=__set__nodeSaveFilePath)) ::StringW  _nodeSaveFilePath;

constexpr void __set__nodeSaveFilePath(::StringW  value) ;

constexpr ::StringW& __get__nodeSaveFilePath() ;

constexpr ::StringW const& __get__nodeSaveFilePath() const;

/// @brief Method OnEnable addr 0x21aa060 size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDestroy addr 0x21aa064 size 0xc virtual false final false
inline void OnDestroy() ;

/// @brief Method InitializeFromHoudini addr 0x21aa070 size 0xac virtual false final false
inline void InitializeFromHoudini(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::StringW  nodeName, ::StringW  filePath) ;

/// @brief Method SetupLoadTask addr 0x21aa11c size 0x98 virtual true final false
inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase*  session) ;

/// @brief Method SaveNodeToFile addr 0x21aa1c8 size 0xa0 virtual false final false
inline bool SaveNodeToFile(::StringW  filePath) ;

/// @brief Method CreateNodeSync addr 0x21aa268 size 0x2f8 virtual false final false
static inline void CreateNodeSync(::HoudiniEngineUnity::HEU_SessionBase*  session, ::StringW  opName, ::StringW  nodeNabel) ;

/// @brief Method Resync addr 0x21aa560 size 0x38 virtual true final false
inline void Resync() ;

/// @brief Method SyncUpdate addr 0x21aa598 size 0x10c virtual true final false
inline void SyncUpdate() ;

static inline ::HoudiniEngineUnity::HEU_NodeSync* New_ctor() ;

/// @brief Method .ctor addr 0x21aa6a4 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_NodeSync(HEU_NodeSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_NodeSync(HEU_NodeSync const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_NodeSync()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_NodeSync, 0x88>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_NodeSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_NodeSync*, "HoudiniEngineUnity", "HEU_NodeSync");
