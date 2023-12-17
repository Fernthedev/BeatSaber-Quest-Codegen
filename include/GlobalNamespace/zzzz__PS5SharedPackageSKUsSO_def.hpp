#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS5SharedPackageSKUsSO)
namespace GlobalNamespace {
struct __PS5SharedPackageSKUsSO__BuildType;
}
namespace GlobalNamespace {
class __PS5SharedPackageSKUsSO__PS5BuildVersion;
}
namespace GlobalNamespace {
class PS5PublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PS5SharedPackageSKUsSO__BuildType;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
namespace GlobalNamespace {
class __PS5SharedPackageSKUsSO__PS5BuildVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType);
MARK_REF_PTR_T(::GlobalNamespace::PS5SharedPackageSKUsSO);
MARK_REF_PTR_T(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion);
// Type: ::BuildType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4566))
// CS Name: ::PS5SharedPackageSKUsSO::BuildType
struct CORDL_TYPE __PS5SharedPackageSKUsSO__BuildType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____PS5SharedPackageSKUsSO__BuildType_Unwrapped
enum struct ____PS5SharedPackageSKUsSO__BuildType_Unwrapped : int32_t {
__E_Application = static_cast<int32_t>(0x0),
__E_RemasterPatch = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Application value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const Application;

/// @brief Field RemasterPatch value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const RemasterPatch;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____PS5SharedPackageSKUsSO__BuildType_Unwrapped () const noexcept {
return std::bit_cast<____PS5SharedPackageSKUsSO__BuildType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __PS5SharedPackageSKUsSO__BuildType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PS5SharedPackageSKUsSO__BuildType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PS5SharedPackageSKUsSO__BuildType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PS5BuildVersion
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4567))
// CS Name: ::PS5SharedPackageSKUsSO::PS5BuildVersion*
class CORDL_TYPE __PS5SharedPackageSKUsSO__PS5BuildVersion : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _masterVersion offset 0x10
 __declspec(property(get=__get__masterVersion, put=__set__masterVersion)) ::StringW  _masterVersion;

/// @brief Field _contentVersion offset 0x18
 __declspec(property(get=__get__contentVersion, put=__set__contentVersion)) ::StringW  _contentVersion;

 __declspec(property(get=get_masterVersion)) ::StringW  masterVersion;

 __declspec(property(get=get_contentVersion)) ::StringW  contentVersion;

constexpr void __set__masterVersion(::StringW  value) ;

constexpr ::StringW& __get__masterVersion() ;

constexpr ::StringW const& __get__masterVersion() const;

constexpr void __set__contentVersion(::StringW  value) ;

constexpr ::StringW& __get__contentVersion() ;

constexpr ::StringW const& __get__contentVersion() const;

/// @brief Method get_masterVersion addr 0x2368390 size 0x8 virtual false final false
inline ::StringW get_masterVersion() ;

/// @brief Method get_contentVersion addr 0x2368398 size 0x8 virtual false final false
inline ::StringW get_contentVersion() ;

static inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* New_ctor() ;

/// @brief Method .ctor addr 0x23683a0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PS5SharedPackageSKUsSO__PS5BuildVersion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PS5SharedPackageSKUsSO__PS5BuildVersion(__PS5SharedPackageSKUsSO__PS5BuildVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PS5SharedPackageSKUsSO__PS5BuildVersion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PS5SharedPackageSKUsSO__PS5BuildVersion(__PS5SharedPackageSKUsSO__PS5BuildVersion const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PS5SharedPackageSKUsSO__PS5BuildVersion()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PS5SharedPackageSKUsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4568))
// CS Name: ::PS5SharedPackageSKUsSO*
class CORDL_TYPE PS5SharedPackageSKUsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using PS5BuildVersion = ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion;

using BuildType = ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _availableSKUs offset 0x18
 __declspec(property(get=__get__availableSKUs, put=__set__availableSKUs)) ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>  _availableSKUs;

/// @brief Field _conceptId offset 0x20
 __declspec(property(get=__get__conceptId, put=__set__conceptId)) ::StringW  _conceptId;

/// @brief Field _buildType offset 0x28
 __declspec(property(get=__get__buildType, put=__set__buildType)) ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType  _buildType;

/// @brief Field _buildVersion offset 0x30
 __declspec(property(get=__get__buildVersion, put=__set__buildVersion)) ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  _buildVersion;

/// @brief Field _latestBuildVersion offset 0x38
 __declspec(property(get=__get__latestBuildVersion, put=__set__latestBuildVersion)) ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  _latestBuildVersion;

 __declspec(property(get=get_availableSKUs)) ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>  availableSKUs;

 __declspec(property(get=get_conceptId)) ::StringW  conceptId;

 __declspec(property(get=get_buildType)) ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType  buildType;

 __declspec(property(get=get_buildVersion)) ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  buildVersion;

 __declspec(property(get=get_latestBuildVersion)) ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  latestBuildVersion;

constexpr void __set__availableSKUs(::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>& __get__availableSKUs() ;

constexpr ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*> const& __get__availableSKUs() const;

constexpr void __set__conceptId(::StringW  value) ;

constexpr ::StringW& __get__conceptId() ;

constexpr ::StringW const& __get__conceptId() const;

constexpr void __set__buildType(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType  value) ;

constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType& __get__buildType() ;

constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const& __get__buildType() const;

constexpr void __set__buildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  value) ;

constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* __get__buildVersion() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> __get__buildVersion() const;

constexpr void __set__latestBuildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  value) ;

constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* __get__latestBuildVersion() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> __get__latestBuildVersion() const;

/// @brief Method get_availableSKUs addr 0x236833c size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*> get_availableSKUs() ;

/// @brief Method get_conceptId addr 0x2368344 size 0x8 virtual false final false
inline ::StringW get_conceptId() ;

/// @brief Method get_buildType addr 0x236834c size 0x8 virtual false final false
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType get_buildType() ;

/// @brief Method get_buildVersion addr 0x2368354 size 0x8 virtual false final false
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* get_buildVersion() ;

/// @brief Method get_latestBuildVersion addr 0x236835c size 0x8 virtual false final false
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* get_latestBuildVersion() ;

/// @brief Method GetPrimarySKU addr 0x2368364 size 0x24 virtual false final false
inline ::GlobalNamespace::PS5PublisherSKUSettingsSO* GetPrimarySKU() ;

static inline ::GlobalNamespace::PS5SharedPackageSKUsSO* New_ctor() ;

/// @brief Method .ctor addr 0x2368388 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5SharedPackageSKUsSO(PS5SharedPackageSKUsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5SharedPackageSKUsSO(PS5SharedPackageSKUsSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5SharedPackageSKUsSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5SharedPackageSKUsSO, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, "", "PS5SharedPackageSKUsSO/BuildType");
NEED_NO_BOX(::GlobalNamespace::PS5SharedPackageSKUsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5SharedPackageSKUsSO*, "", "PS5SharedPackageSKUsSO");
NEED_NO_BOX(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, "", "PS5SharedPackageSKUsSO/PS5BuildVersion");
