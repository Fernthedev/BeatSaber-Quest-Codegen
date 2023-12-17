#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPackInfo)
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPackInfo);
// Type: UnityEngine.Android::AndroidAssetPackInfo
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14922))
// CS Name: ::UnityEngine.Android::AndroidAssetPackInfo*
class CORDL_TYPE AndroidAssetPackInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <name>k__BackingField offset 0x10
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field <status>k__BackingField offset 0x18
 __declspec(property(get=__get__status_k__BackingField, put=__set__status_k__BackingField)) ::UnityEngine::Android::AndroidAssetPackStatus  _status_k__BackingField;

/// @brief Field <size>k__BackingField offset 0x20
 __declspec(property(get=__get__size_k__BackingField, put=__set__size_k__BackingField)) uint64_t  _size_k__BackingField;

/// @brief Field <bytesDownloaded>k__BackingField offset 0x28
 __declspec(property(get=__get__bytesDownloaded_k__BackingField, put=__set__bytesDownloaded_k__BackingField)) uint64_t  _bytesDownloaded_k__BackingField;

/// @brief Field <transferProgress>k__BackingField offset 0x30
 __declspec(property(get=__get__transferProgress_k__BackingField, put=__set__transferProgress_k__BackingField)) float_t  _transferProgress_k__BackingField;

/// @brief Field <error>k__BackingField offset 0x34
 __declspec(property(get=__get__error_k__BackingField, put=__set__error_k__BackingField)) ::UnityEngine::Android::AndroidAssetPackError  _error_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__name_k__BackingField() ;

constexpr ::StringW const& __get__name_k__BackingField() const;

constexpr void __set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus  value) ;

constexpr ::UnityEngine::Android::AndroidAssetPackStatus& __get__status_k__BackingField() ;

constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& __get__status_k__BackingField() const;

constexpr void __set__size_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__size_k__BackingField() ;

constexpr uint64_t const& __get__size_k__BackingField() const;

constexpr void __set__bytesDownloaded_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__bytesDownloaded_k__BackingField() ;

constexpr uint64_t const& __get__bytesDownloaded_k__BackingField() const;

constexpr void __set__transferProgress_k__BackingField(float_t  value) ;

constexpr float_t& __get__transferProgress_k__BackingField() ;

constexpr float_t const& __get__transferProgress_k__BackingField() const;

constexpr void __set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError  value) ;

constexpr ::UnityEngine::Android::AndroidAssetPackError& __get__error_k__BackingField() ;

constexpr ::UnityEngine::Android::AndroidAssetPackError const& __get__error_k__BackingField() const;

static inline ::UnityEngine::Android::AndroidAssetPackInfo* New_ctor(::StringW  name, ::UnityEngine::Android::AndroidAssetPackStatus  status, uint64_t  size, uint64_t  bytesDownloaded, float_t  transferProgress, ::UnityEngine::Android::AndroidAssetPackError  error) ;

/// @brief Method .ctor addr 0x2c8cb64 size 0x64 virtual false final false
inline void _ctor(::StringW  name, ::UnityEngine::Android::AndroidAssetPackStatus  status, uint64_t  size, uint64_t  bytesDownloaded, float_t  transferProgress, ::UnityEngine::Android::AndroidAssetPackError  error) ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidAssetPackInfo(AndroidAssetPackInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidAssetPackInfo(AndroidAssetPackInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidAssetPackInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackInfo, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackInfo*, "UnityEngine.Android", "AndroidAssetPackInfo");
