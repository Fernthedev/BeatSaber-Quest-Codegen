#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryProfiler)
namespace UnityEngine::Profiling::Memory::Experimental {
class MetaData;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
// Forward declare root types
namespace UnityEngine::Profiling::Memory::Experimental {
class MemoryProfiler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler);
// Type: UnityEngine.Profiling.Memory.Experimental::MemoryProfiler
namespace UnityEngine::Profiling::Memory::Experimental {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10299))
// CS Name: ::UnityEngine.Profiling.Memory.Experimental::MemoryProfiler*
class CORDL_TYPE MemoryProfiler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_m_SnapshotFinished(::System::Action_2<::StringW,bool>*  value) ;

static inline ::System::Action_2<::StringW,bool>* getStaticF_m_SnapshotFinished() ;

static inline void setStaticF_m_SaveScreenshotToDisk(::System::Action_3<::StringW,bool,::UnityEngine::Profiling::Experimental::DebugScreenCapture>*  value) ;

static inline ::System::Action_3<::StringW,bool,::UnityEngine::Profiling::Experimental::DebugScreenCapture>* getStaticF_m_SaveScreenshotToDisk() ;

static inline void setStaticF_createMetaData(::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>*  value) ;

static inline ::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* getStaticF_createMetaData() ;

/// @brief Method PrepareMetadata addr 0x2ce6cd8 size 0x174 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> PrepareMetadata() ;

/// @brief Method WriteIntToByteArray addr 0x2ce6e4c size 0x8c virtual false final false
static inline int32_t WriteIntToByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  value) ;

/// @brief Method WriteStringToByteArray addr 0x2ce6ed8 size 0x98 virtual false final false
static inline int32_t WriteStringToByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, ::StringW  value) ;

/// @brief Method FinalizeSnapshot addr 0x2ce6f70 size 0x84 virtual false final false
static inline void FinalizeSnapshot(::StringW  path, bool  result) ;

/// @brief Method SaveScreenshotToDisk addr 0x2ce6ff4 size 0xfc virtual false final false
static inline void SaveScreenshotToDisk(::StringW  path, bool  result, ::cordl_internals::intptr_t  pixelsPtr, int32_t  pixelsCount, ::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryProfiler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryProfiler(MemoryProfiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryProfiler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryProfiler(MemoryProfiler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryProfiler()  = default;
public:


// Fields

// Static field m_SnapshotFinished

// Static field m_SaveScreenshotToDisk

// Static field createMetaData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Profiling::Memory::Experimental
NEED_NO_BOX(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
