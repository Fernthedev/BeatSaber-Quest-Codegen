#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PosesSerializer)
namespace GlobalNamespace {
class RecordingConverter;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class __PosesRecordingData__TransformsKeyframe;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesSerializer);
// Type: ::PosesSerializer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5941))
// CS Name: ::PosesSerializer*
class CORDL_TYPE PosesSerializer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field kInfoFileName offset 0x0
static constexpr ::ConstString  kInfoFileName{u"Info.json"};

/// @brief Field kDataFileName offset 0x0
static constexpr ::ConstString  kDataFileName{u"Data.rcd"};

/// @brief Field _logger offset 0x10
 __declspec(property(get=__get__logger, put=__set__logger)) ::GlobalNamespace::IBeatSaberLogger*  _logger;

/// @brief Field _recordingConverter offset 0x18
 __declspec(property(get=__get__recordingConverter, put=__set__recordingConverter)) ::GlobalNamespace::RecordingConverter*  _recordingConverter;

/// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
constexpr operator  ::GlobalNamespace::IPosesSerializer*() noexcept;

constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger*  value) ;

constexpr ::GlobalNamespace::IBeatSaberLogger* __get__logger() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> __get__logger() const;

constexpr void __set__recordingConverter(::GlobalNamespace::RecordingConverter*  value) ;

constexpr ::GlobalNamespace::RecordingConverter* __get__recordingConverter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingConverter*> __get__recordingConverter() const;

static inline ::GlobalNamespace::PosesSerializer* New_ctor(::GlobalNamespace::IBeatSaberLogger*  logger) ;

/// @brief Method .ctor addr 0x23022a8 size 0x80 virtual false final false
inline void _ctor(::GlobalNamespace::IBeatSaberLogger*  logger) ;

/// @brief Method SaveInfoFile addr 0x2302350 size 0x104 virtual false final false
static inline void SaveInfoFile(::StringW  filePath, ::GlobalNamespace::PosesRecordingData*  data) ;

/// @brief Method SaveDataFile addr 0x2302454 size 0x368 virtual false final false
static inline void SaveDataFile(::StringW  filePath, ::GlobalNamespace::PosesRecordingData*  data) ;

/// @brief Method SaveRecordingIntoDirectory addr 0x23027bc size 0x2a0 virtual false final false
inline void SaveRecordingIntoDirectory(::StringW  path, ::GlobalNamespace::PosesRecordingData*  data) ;

/// @brief Method LoadInfoFile addr 0x2302a5c size 0x1a4 virtual false final false
inline ::GlobalNamespace::PosesRecordingInfoSaveData* LoadInfoFile(::StringW  filePath) ;

/// @brief Method LoadDataFile addr 0x2302c00 size 0x5fc virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* LoadDataFile(::StringW  filePath) ;

/// @brief Method LoadRecordingFromDirectory addr 0x23031fc size 0x308 virtual false final false
inline ::GlobalNamespace::PosesRecordingData* LoadRecordingFromDirectory(::StringW  path) ;

/// @brief Method SaveToOldFormat addr 0x2303504 size 0x18 virtual true final true
inline void SaveToOldFormat(::StringW  path, ::GlobalNamespace::PosesRecordingData*  data) ;

/// @brief Method SaveRecording addr 0x2303608 size 0x3c virtual true final true
inline void SaveRecording(::StringW  path, ::GlobalNamespace::PosesRecordingData*  data, bool  saveToOldFormat) ;

/// @brief Method LoadRecording addr 0x2303644 size 0x118 virtual true final true
inline ::GlobalNamespace::PosesRecordingData* LoadRecording(::StringW  path) ;

/// @brief Method RecordingExists addr 0x230375c size 0x340 virtual true final true
inline bool RecordingExists(::StringW  path) ;

/// @brief Method RecordingCanBeCreated addr 0x2303a9c size 0x4d4 virtual true final true
inline bool RecordingCanBeCreated(::StringW  path) ;

// Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PosesSerializer(PosesSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PosesSerializer(PosesSerializer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PosesSerializer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesSerializer, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesSerializer*, "", "PosesSerializer");
