#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PosesRecordingInfoSaveData)
namespace GlobalNamespace {
class __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingInfoSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData);
// Type: ::ExternalCameraCalibrationSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5939))
// CS Name: ::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData*
class CORDL_TYPE __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _fieldOfVision offset 0x10
 __declspec(property(get=__get__fieldOfVision, put=__set__fieldOfVision)) float_t  _fieldOfVision;

/// @brief Field _nearClip offset 0x14
 __declspec(property(get=__get__nearClip, put=__set__nearClip)) float_t  _nearClip;

/// @brief Field _farClip offset 0x18
 __declspec(property(get=__get__farClip, put=__set__farClip)) float_t  _farClip;

/// @brief Field _hmdOffset offset 0x1c
 __declspec(property(get=__get__hmdOffset, put=__set__hmdOffset)) float_t  _hmdOffset;

/// @brief Field _nearOffset offset 0x20
 __declspec(property(get=__get__nearOffset, put=__set__nearOffset)) float_t  _nearOffset;

 __declspec(property(get=get_fieldOfVision)) float_t  fieldOfVision;

 __declspec(property(get=get_nearClip)) float_t  nearClip;

 __declspec(property(get=get_farClip)) float_t  farClip;

 __declspec(property(get=get_hmdOffset)) float_t  hmdOffset;

 __declspec(property(get=get_nearOffset)) float_t  nearOffset;

constexpr void __set__fieldOfVision(float_t  value) ;

constexpr float_t& __get__fieldOfVision() ;

constexpr float_t const& __get__fieldOfVision() const;

constexpr void __set__nearClip(float_t  value) ;

constexpr float_t& __get__nearClip() ;

constexpr float_t const& __get__nearClip() const;

constexpr void __set__farClip(float_t  value) ;

constexpr float_t& __get__farClip() ;

constexpr float_t const& __get__farClip() const;

constexpr void __set__hmdOffset(float_t  value) ;

constexpr float_t& __get__hmdOffset() ;

constexpr float_t const& __get__hmdOffset() const;

constexpr void __set__nearOffset(float_t  value) ;

constexpr float_t& __get__nearOffset() ;

constexpr float_t const& __get__nearOffset() const;

/// @brief Method get_fieldOfVision addr 0x2302230 size 0x8 virtual false final false
inline float_t get_fieldOfVision() ;

/// @brief Method get_nearClip addr 0x2302238 size 0x8 virtual false final false
inline float_t get_nearClip() ;

/// @brief Method get_farClip addr 0x2302240 size 0x8 virtual false final false
inline float_t get_farClip() ;

/// @brief Method get_hmdOffset addr 0x2302248 size 0x8 virtual false final false
inline float_t get_hmdOffset() ;

/// @brief Method get_nearOffset addr 0x2302250 size 0x8 virtual false final false
inline float_t get_nearOffset() ;

static inline ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* New_ctor(float_t  fieldOfVision, float_t  nearClip, float_t  farClip, float_t  hmdOffset, float_t  nearOffset) ;

/// @brief Method .ctor addr 0x2302258 size 0x50 virtual false final false
inline void _ctor(float_t  fieldOfVision, float_t  nearClip, float_t  farClip, float_t  hmdOffset, float_t  nearOffset) ;

// Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData(__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData(__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PosesRecordingInfoSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5940))
// CS Name: ::PosesRecordingInfoSaveData*
class CORDL_TYPE PosesRecordingInfoSaveData : public ::System::Object {
public:
// Declarations
using ExternalCameraCalibrationSaveData = ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field kCurrentVersion offset 0x0
static constexpr ::ConstString  kCurrentVersion{u"1.0.0"};

/// @brief Field _version offset 0x10
 __declspec(property(get=__get__version, put=__set__version)) ::StringW  _version;

/// @brief Field _objectIds offset 0x18
 __declspec(property(get=__get__objectIds, put=__set__objectIds)) ::ArrayW<::StringW,::Array<::StringW>*>  _objectIds;

/// @brief Field _externalCameraCalibration offset 0x20
 __declspec(property(get=__get__externalCameraCalibration, put=__set__externalCameraCalibration)) ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*  _externalCameraCalibration;

/// @brief Field _dataFileName offset 0x28
 __declspec(property(get=__get__dataFileName, put=__set__dataFileName)) ::StringW  _dataFileName;

 __declspec(property(get=get_version)) ::StringW  version;

 __declspec(property(get=get_objectIds)) ::ArrayW<::StringW,::Array<::StringW>*>  objectIds;

 __declspec(property(get=get_externalCameraCalibration)) ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*  externalCameraCalibration;

 __declspec(property(get=get_dataFileName)) ::StringW  dataFileName;

constexpr void __set__version(::StringW  value) ;

constexpr ::StringW& __get__version() ;

constexpr ::StringW const& __get__version() const;

constexpr void __set__objectIds(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__objectIds() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__objectIds() const;

constexpr void __set__externalCameraCalibration(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*  value) ;

constexpr ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* __get__externalCameraCalibration() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*> __get__externalCameraCalibration() const;

constexpr void __set__dataFileName(::StringW  value) ;

constexpr ::StringW& __get__dataFileName() ;

constexpr ::StringW const& __get__dataFileName() const;

/// @brief Method get_version addr 0x230219c size 0x8 virtual false final false
inline ::StringW get_version() ;

/// @brief Method get_objectIds addr 0x23021a4 size 0x8 virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_objectIds() ;

/// @brief Method get_externalCameraCalibration addr 0x23021ac size 0x8 virtual false final false
inline ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* get_externalCameraCalibration() ;

/// @brief Method get_dataFileName addr 0x23021b4 size 0x8 virtual false final false
inline ::StringW get_dataFileName() ;

static inline ::GlobalNamespace::PosesRecordingInfoSaveData* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  objectIds, ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*  externalCameraCalibration, ::StringW  dataFileName) ;

/// @brief Method .ctor addr 0x23021bc size 0x74 virtual false final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  objectIds, ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*  externalCameraCalibration, ::StringW  dataFileName) ;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PosesRecordingInfoSaveData(PosesRecordingInfoSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PosesRecordingInfoSaveData(PosesRecordingInfoSaveData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PosesRecordingInfoSaveData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingInfoSaveData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecordingInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingInfoSaveData*, "", "PosesRecordingInfoSaveData");
NEED_NO_BOX(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*, "", "PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData");
