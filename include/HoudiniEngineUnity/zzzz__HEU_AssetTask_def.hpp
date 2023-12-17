#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetTask)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct __HEU_Task__TaskResult;
}
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
namespace HoudiniEngineUnity {
struct __HEU_AssetTask__BuildType;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_AssetTask__BuildType;
}
namespace HoudiniEngineUnity {
class HEU_AssetTask;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_AssetTask__BuildType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetTask);
// Type: ::BuildType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9801))
// CS Name: ::HEU_AssetTask::BuildType
struct CORDL_TYPE __HEU_AssetTask__BuildType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_AssetTask__BuildType_Unwrapped
enum struct ____HEU_AssetTask__BuildType_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_LOAD = static_cast<int32_t>(0x1),
__E_COOK = static_cast<int32_t>(0x2),
__E_RELOAD = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NONE value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const NONE;

/// @brief Field LOAD value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const LOAD;

/// @brief Field COOK value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const COOK;

/// @brief Field RELOAD value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const RELOAD;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_AssetTask__BuildType_Unwrapped () const noexcept {
return std::bit_cast<____HEU_AssetTask__BuildType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_AssetTask__BuildType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_AssetTask__BuildType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_AssetTask__BuildType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AssetTask__BuildType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetTask
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9800))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9802))
// CS Name: ::HoudiniEngineUnity::HEU_AssetTask*
class CORDL_TYPE HEU_AssetTask : public ::HoudiniEngineUnity::HEU_Task {
public:
// Declarations
using BuildType = ::HoudiniEngineUnity::__HEU_AssetTask__BuildType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::HoudiniEngineUnity::HEU_Task)]{};

/// @brief Field _buildType offset 0x30
 __declspec(property(get=__get__buildType, put=__set__buildType)) ::HoudiniEngineUnity::__HEU_AssetTask__BuildType  _buildType;

/// @brief Field _asset offset 0x38
 __declspec(property(get=__get__asset, put=__set__asset)) ::HoudiniEngineUnity::HEU_HoudiniAsset*  _asset;

/// @brief Field _assetPath offset 0x40
 __declspec(property(get=__get__assetPath, put=__set__assetPath)) ::StringW  _assetPath;

/// @brief Field _position offset 0x48
 __declspec(property(get=__get__position, put=__set__position)) ::UnityEngine::Vector3  _position;

/// @brief Field _buildResult offset 0x54
 __declspec(property(get=__get__buildResult, put=__set__buildResult)) bool  _buildResult;

/// @brief Field _forceSessionID offset 0x58
 __declspec(property(get=__get__forceSessionID, put=__set__forceSessionID)) int64_t  _forceSessionID;

constexpr void __set__buildType(::HoudiniEngineUnity::__HEU_AssetTask__BuildType  value) ;

constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType& __get__buildType() ;

constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const& __get__buildType() const;

constexpr void __set__asset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value) ;

constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* __get__asset() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> __get__asset() const;

constexpr void __set__assetPath(::StringW  value) ;

constexpr ::StringW& __get__assetPath() ;

constexpr ::StringW const& __get__assetPath() const;

constexpr void __set__position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__position() ;

constexpr ::UnityEngine::Vector3 const& __get__position() const;

constexpr void __set__buildResult(bool  value) ;

constexpr bool& __get__buildResult() ;

constexpr bool const& __get__buildResult() const;

constexpr void __set__forceSessionID(int64_t  value) ;

constexpr int64_t& __get__forceSessionID() ;

constexpr int64_t const& __get__forceSessionID() const;

/// @brief Method GetTaskSession addr 0x21aa848 size 0xb4 virtual false final false
inline ::HoudiniEngineUnity::HEU_SessionBase* GetTaskSession() ;

/// @brief Method DoTask addr 0x21aa8fc size 0x5b0 virtual true final false
inline void DoTask() ;

/// @brief Method KillTask addr 0x21aaed4 size 0x240 virtual true final false
inline void KillTask() ;

/// @brief Method CompleteTask addr 0x21ab114 size 0x240 virtual true final false
inline void CompleteTask(::HoudiniEngineUnity::__HEU_Task__TaskResult  result) ;

/// @brief Method CookCompletedCallback addr 0x21ab354 size 0x80 virtual false final false
inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputs) ;

/// @brief Method CookCompletedCallback addr 0x21ab3d4 size 0x10 virtual false final false
inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_CookedEventData*  cookedEventData) ;

/// @brief Method CookCompletedCallback addr 0x21ab3e4 size 0x10 virtual false final false
inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_ReloadEventData*  reloadEventData) ;

static inline ::HoudiniEngineUnity::HEU_AssetTask* New_ctor() ;

/// @brief Method .ctor addr 0x21ab3f4 size 0xb8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_AssetTask(HEU_AssetTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_AssetTask(HEU_AssetTask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_AssetTask()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetTask, 0x60>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AssetTask__BuildType, "HoudiniEngineUnity", "HEU_AssetTask/BuildType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetTask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetTask*, "HoudiniEngineUnity", "HEU_AssetTask");
