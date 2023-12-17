#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SaveDataExtensions)
namespace GlobalNamespace {
class ISaveData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SaveDataExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaveDataExtensions);
// Type: ::SaveDataExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14388))
// CS Name: ::SaveDataExtensions*
class CORDL_TYPE SaveDataExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SaveToJSONFile addr 0x20f4c50 size 0x174 virtual false final false
static inline void SaveToJSONFile(::GlobalNamespace::ISaveData*  saveData, ::System::Object*  obj, ::StringW  filePath, bool  prettyPrint) ;

/// @brief Method SaveToJSONFileCompact addr 0x20f4dc4 size 0x1d0 virtual false final false
static inline void SaveToJSONFileCompact(::GlobalNamespace::ISaveData*  saveData, ::System::Object*  obj, ::StringW  filePath) ;

/// @brief Method SaveToJSONFile addr 0x20f4f94 size 0x190 virtual false final false
static inline void SaveToJSONFile(::GlobalNamespace::ISaveData*  saveData, ::System::Object*  obj, ::StringW  filePath, ::StringW  tempFilePath, ::StringW  backupFilePath) ;

/// @brief Method SaveToJSONFileCompact addr 0x20f5124 size 0x1f0 virtual false final false
static inline void SaveToJSONFileCompact(::GlobalNamespace::ISaveData*  saveData, ::System::Object*  obj, ::StringW  filePath, ::StringW  tempFilePath, ::StringW  backupFilePath) ;

/// @brief Method LoadFromJSONFile addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T LoadFromJSONFile(::GlobalNamespace::ISaveData*  saveData, ::StringW  filePath, ::StringW  backupFilePath) ;

/// @brief Method LoadJSONFile addr 0x20f5314 size 0xc8 virtual false final false
static inline ::StringW LoadJSONFile(::GlobalNamespace::ISaveData*  saveData, ::StringW  filePath, ::StringW  backupFilePath) ;

// Ctor Parameters [CppParam { name: "", ty: "SaveDataExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveDataExtensions(SaveDataExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveDataExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveDataExtensions(SaveDataExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaveDataExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaveDataExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaveDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaveDataExtensions*, "", "SaveDataExtensions");
