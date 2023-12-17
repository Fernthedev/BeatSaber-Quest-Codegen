#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ObjectInitializationData)
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::ObjectInitializationData);
// Type: UnityEngine.ResourceManagement.Util::ObjectInitializationData
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13984))
// CS Name: ::UnityEngine.ResourceManagement.Util::ObjectInitializationData
struct CORDL_TYPE ObjectInitializationData : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_Id offset 0x0
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) ::StringW  m_Id;

/// @brief Field m_ObjectType offset 0x8
 __declspec(property(get=__get_m_ObjectType, put=__set_m_ObjectType)) ::UnityEngine::ResourceManagement::Util::SerializedType  m_ObjectType;

/// @brief Field m_Data offset 0x28
 __declspec(property(get=__get_m_Data, put=__set_m_Data)) ::StringW  m_Data;

 __declspec(property(get=get_Id)) ::StringW  Id;

 __declspec(property(get=get_ObjectType)) ::UnityEngine::ResourceManagement::Util::SerializedType  ObjectType;

 __declspec(property(get=get_Data)) ::StringW  Data;

constexpr void __set_m_Id(::StringW  value) ;

constexpr ::StringW& __get_m_Id() ;

constexpr ::StringW const& __get_m_Id() const;

constexpr void __set_m_ObjectType(::UnityEngine::ResourceManagement::Util::SerializedType  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::SerializedType& __get_m_ObjectType() ;

constexpr ::UnityEngine::ResourceManagement::Util::SerializedType const& __get_m_ObjectType() const;

constexpr void __set_m_Data(::StringW  value) ;

constexpr ::StringW& __get_m_Data() ;

constexpr ::StringW const& __get_m_Data() const;

/// @brief Method get_Id addr 0x2bd27e0 size 0x8 virtual false final false
inline ::StringW get_Id() ;

/// @brief Method get_ObjectType addr 0x2bd27e8 size 0x10 virtual false final false
inline ::UnityEngine::ResourceManagement::Util::SerializedType get_ObjectType() ;

/// @brief Method get_Data addr 0x2bd27f8 size 0x8 virtual false final false
inline ::StringW get_Data() ;

/// @brief Method ToString addr 0x2bd2800 size 0x98 virtual true final false
inline ::StringW ToString() ;

/// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline TObject CreateInstance(::StringW  idOverride) ;

/// @brief Method GetAsyncInitHandle addr 0x2bd2898 size 0x24c virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle GetAsyncInitHandle(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::StringW  idOverride) ;

// Ctor Parameters [CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_ObjectType", ty: "::UnityEngine::ResourceManagement::Util::SerializedType", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ObjectInitializationData(::StringW  m_Id, ::UnityEngine::ResourceManagement::Util::SerializedType  m_ObjectType, ::StringW  m_Data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ObjectInitializationData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ObjectInitializationData()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData");
