#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_VolumeInfo)
namespace HoudiniEngineUnity {
struct HAPI_VolumeType;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeInfo);
// Type: HoudiniEngineUnity::HAPI_VolumeInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9746))
// CS Name: ::HoudiniEngineUnity::HAPI_VolumeInfo
struct CORDL_TYPE HAPI_VolumeInfo : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field nameSH offset 0x0
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field type offset 0x4
 __declspec(property(get=__get_type, put=__set_type)) ::HoudiniEngineUnity::HAPI_VolumeType  type;

/// @brief Field xLength offset 0x8
 __declspec(property(get=__get_xLength, put=__set_xLength)) int32_t  xLength;

/// @brief Field yLength offset 0xc
 __declspec(property(get=__get_yLength, put=__set_yLength)) int32_t  yLength;

/// @brief Field zLength offset 0x10
 __declspec(property(get=__get_zLength, put=__set_zLength)) int32_t  zLength;

/// @brief Field minX offset 0x14
 __declspec(property(get=__get_minX, put=__set_minX)) int32_t  minX;

/// @brief Field minY offset 0x18
 __declspec(property(get=__get_minY, put=__set_minY)) int32_t  minY;

/// @brief Field minZ offset 0x1c
 __declspec(property(get=__get_minZ, put=__set_minZ)) int32_t  minZ;

/// @brief Field tupleSize offset 0x20
 __declspec(property(get=__get_tupleSize, put=__set_tupleSize)) int32_t  tupleSize;

/// @brief Field storage offset 0x24
 __declspec(property(get=__get_storage, put=__set_storage)) ::HoudiniEngineUnity::HAPI_StorageType  storage;

/// @brief Field tileSize offset 0x28
 __declspec(property(get=__get_tileSize, put=__set_tileSize)) int32_t  tileSize;

/// @brief Field transform offset 0x30
 __declspec(property(get=__get_transform, put=__set_transform)) ::HoudiniEngineUnity::HAPI_Transform  transform;

/// @brief Field hasTaper offset 0x58
 __declspec(property(get=__get_hasTaper, put=__set_hasTaper)) bool  hasTaper;

/// @brief Field xTaper offset 0x5c
 __declspec(property(get=__get_xTaper, put=__set_xTaper)) float_t  xTaper;

/// @brief Field yTaper offset 0x60
 __declspec(property(get=__get_yTaper, put=__set_yTaper)) float_t  yTaper;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_VolumeType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_VolumeType& __get_type() ;

constexpr ::HoudiniEngineUnity::HAPI_VolumeType const& __get_type() const;

constexpr void __set_xLength(int32_t  value) ;

constexpr int32_t& __get_xLength() ;

constexpr int32_t const& __get_xLength() const;

constexpr void __set_yLength(int32_t  value) ;

constexpr int32_t& __get_yLength() ;

constexpr int32_t const& __get_yLength() const;

constexpr void __set_zLength(int32_t  value) ;

constexpr int32_t& __get_zLength() ;

constexpr int32_t const& __get_zLength() const;

constexpr void __set_minX(int32_t  value) ;

constexpr int32_t& __get_minX() ;

constexpr int32_t const& __get_minX() const;

constexpr void __set_minY(int32_t  value) ;

constexpr int32_t& __get_minY() ;

constexpr int32_t const& __get_minY() const;

constexpr void __set_minZ(int32_t  value) ;

constexpr int32_t& __get_minZ() ;

constexpr int32_t const& __get_minZ() const;

constexpr void __set_tupleSize(int32_t  value) ;

constexpr int32_t& __get_tupleSize() ;

constexpr int32_t const& __get_tupleSize() const;

constexpr void __set_storage(::HoudiniEngineUnity::HAPI_StorageType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType& __get_storage() ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType const& __get_storage() const;

constexpr void __set_tileSize(int32_t  value) ;

constexpr int32_t& __get_tileSize() ;

constexpr int32_t const& __get_tileSize() const;

constexpr void __set_transform(::HoudiniEngineUnity::HAPI_Transform  value) ;

constexpr ::HoudiniEngineUnity::HAPI_Transform& __get_transform() ;

constexpr ::HoudiniEngineUnity::HAPI_Transform const& __get_transform() const;

constexpr void __set_hasTaper(bool  value) ;

constexpr bool& __get_hasTaper() ;

constexpr bool const& __get_hasTaper() const;

constexpr void __set_xTaper(float_t  value) ;

constexpr float_t& __get_xTaper() ;

constexpr float_t const& __get_xTaper() const;

constexpr void __set_yTaper(float_t  value) ;

constexpr float_t& __get_yTaper() ;

constexpr float_t const& __get_yTaper() const;

// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeType", modifiers: "", def_value: None }, CppParam { name: "xLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: None }, CppParam { name: "tileSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::HoudiniEngineUnity::HAPI_Transform", modifiers: "", def_value: None }, CppParam { name: "hasTaper", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "xTaper", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yTaper", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_VolumeInfo(int32_t  nameSH, ::HoudiniEngineUnity::HAPI_VolumeType  type, int32_t  xLength, int32_t  yLength, int32_t  zLength, int32_t  minX, int32_t  minY, int32_t  minZ, int32_t  tupleSize, ::HoudiniEngineUnity::HAPI_StorageType  storage, int32_t  tileSize, ::HoudiniEngineUnity::HAPI_Transform  transform, bool  hasTaper, float_t  xTaper, float_t  yTaper) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_VolumeInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_VolumeInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeInfo, 0x68>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeInfo, "HoudiniEngineUnity", "HAPI_VolumeInfo");
