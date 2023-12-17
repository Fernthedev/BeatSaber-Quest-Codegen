#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRSettings)
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct EVRSettingsError;
}
namespace System {
class IAsyncResult;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
class __IVRSettings___GetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___Sync;
}
namespace OVR::OpenVR {
class __IVRSettings___GetSettingsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSettings___SetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveSection;
}
namespace OVR::OpenVR {
class __IVRSettings___GetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___GetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveKeyInSection;
}
namespace OVR::OpenVR {
class __IVRSettings___SetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___SetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___SetString;
}
namespace OVR::OpenVR {
class __IVRSettings___GetString;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRSettings___GetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___GetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___GetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___GetSettingsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSettings___GetString;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveKeyInSection;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveSection;
}
namespace OVR::OpenVR {
class __IVRSettings___SetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___SetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___SetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___SetString;
}
namespace OVR::OpenVR {
class __IVRSettings___Sync;
}
namespace OVR::OpenVR {
struct IVRSettings;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetBool);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetFloat);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetInt32);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetString);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___RemoveKeyInSection);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___RemoveSection);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetBool);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetFloat);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetInt32);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetString);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___Sync);
MARK_VAL_T(::OVR::OpenVR::IVRSettings);
// Type: ::_GetSettingsErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8494))
// CS Name: ::IVRSettings::_GetSettingsErrorNameFromEnum*
class CORDL_TYPE __IVRSettings___GetSettingsErrorNameFromEnum : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ead9c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eae60 size 0x14 virtual true final false
inline ::cordl_internals::intptr_t Invoke(::OVR::OpenVR::EVRSettingsError  eError) ;

/// @brief Method BeginInvoke addr 0x27eae74 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRSettingsError  eError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eaef8 size 0x28 virtual true final false
inline ::cordl_internals::intptr_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetSettingsErrorNameFromEnum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetSettingsErrorNameFromEnum(__IVRSettings___GetSettingsErrorNameFromEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetSettingsErrorNameFromEnum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetSettingsErrorNameFromEnum(__IVRSettings___GetSettingsErrorNameFromEnum const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___GetSettingsErrorNameFromEnum()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_Sync
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8495))
// CS Name: ::IVRSettings::_Sync*
class CORDL_TYPE __IVRSettings___Sync : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___Sync* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eaf20 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eafe4 size 0x18 virtual true final false
inline bool Invoke(bool  bForce, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27eaffc size 0xbc virtual true final false
inline ::System::IAsyncResult* BeginInvoke(bool  bForce, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eb0b8 size 0x2c virtual true final false
inline bool EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___Sync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___Sync(__IVRSettings___Sync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___Sync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___Sync(__IVRSettings___Sync const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___Sync()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___Sync, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetBool
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8496))
// CS Name: ::IVRSettings::_SetBool*
class CORDL_TYPE __IVRSettings___SetBool : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___SetBool* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eb0e4 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eb1bc size 0x18 virtual true final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, bool  bValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27eb1d4 size 0xd0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, bool  bValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eb2a4 size 0x1c virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetBool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetBool(__IVRSettings___SetBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetBool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetBool(__IVRSettings___SetBool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___SetBool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetBool, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetInt32
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8497))
// CS Name: ::IVRSettings::_SetInt32*
class CORDL_TYPE __IVRSettings___SetInt32 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___SetInt32* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eb2c0 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eb398 size 0x14 virtual true final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, int32_t  nValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27eb3ac size 0xcc virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, int32_t  nValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eb478 size 0x1c virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetInt32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetInt32(__IVRSettings___SetInt32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetInt32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetInt32(__IVRSettings___SetInt32 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___SetInt32()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetInt32, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetFloat
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8498))
// CS Name: ::IVRSettings::_SetFloat*
class CORDL_TYPE __IVRSettings___SetFloat : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___SetFloat* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eb494 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eb56c size 0x14 virtual true final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, float_t  flValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27eb580 size 0xcc virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, float_t  flValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eb64c size 0x1c virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetFloat(__IVRSettings___SetFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetFloat(__IVRSettings___SetFloat const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___SetFloat()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetFloat, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetString
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8499))
// CS Name: ::IVRSettings::_SetString*
class CORDL_TYPE __IVRSettings___SetString : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___SetString* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eb668 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eb740 size 0x14 virtual true final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::StringW  pchValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27eb754 size 0xa8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::StringW  pchValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eb7fc size 0x1c virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetString(__IVRSettings___SetString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetString(__IVRSettings___SetString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___SetString()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetString, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetBool
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8500))
// CS Name: ::IVRSettings::_GetBool*
class CORDL_TYPE __IVRSettings___GetBool : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___GetBool* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eb818 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eb8f0 size 0x14 virtual true final false
inline bool Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27eb904 size 0xa0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eb9a4 size 0x2c virtual true final false
inline bool EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetBool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetBool(__IVRSettings___GetBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetBool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetBool(__IVRSettings___GetBool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___GetBool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetBool, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetInt32
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8501))
// CS Name: ::IVRSettings::_GetInt32*
class CORDL_TYPE __IVRSettings___GetInt32 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___GetInt32* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eb9d0 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ebaa8 size 0x14 virtual true final false
inline int32_t Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27ebabc size 0xa0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ebb5c size 0x2c virtual true final false
inline int32_t EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetInt32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetInt32(__IVRSettings___GetInt32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetInt32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetInt32(__IVRSettings___GetInt32 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___GetInt32()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetInt32, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetFloat
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8502))
// CS Name: ::IVRSettings::_GetFloat*
class CORDL_TYPE __IVRSettings___GetFloat : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___GetFloat* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ebb88 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ebc60 size 0x14 virtual true final false
inline float_t Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27ebc74 size 0xa0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ebd14 size 0x2c virtual true final false
inline float_t EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetFloat(__IVRSettings___GetFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetFloat(__IVRSettings___GetFloat const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___GetFloat()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetFloat, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetString
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8503))
// CS Name: ::IVRSettings::_GetString*
class CORDL_TYPE __IVRSettings___GetString : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___GetString* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ebd40 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ebe18 size 0x14 virtual true final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::System::Text::StringBuilder*  pchValue, uint32_t  unValueLen, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27ebe2c size 0xdc virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::System::Text::StringBuilder*  pchValue, uint32_t  unValueLen, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ebf08 size 0x1c virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetString(__IVRSettings___GetString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetString(__IVRSettings___GetString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___GetString()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetString, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_RemoveSection
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8504))
// CS Name: ::IVRSettings::_RemoveSection*
class CORDL_TYPE __IVRSettings___RemoveSection : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___RemoveSection* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ebf24 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ebffc size 0x14 virtual true final false
inline void Invoke(::StringW  pchSection, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27ec010 size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ec0a4 size 0x1c virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveSection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___RemoveSection(__IVRSettings___RemoveSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveSection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___RemoveSection(__IVRSettings___RemoveSection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___RemoveSection()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___RemoveSection, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_RemoveKeyInSection
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8505))
// CS Name: ::IVRSettings::_RemoveKeyInSection*
class CORDL_TYPE __IVRSettings___RemoveKeyInSection : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ec0c0 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ec198 size 0x14 virtual true final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

/// @brief Method BeginInvoke addr 0x27ec1ac size 0xa0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ec24c size 0x1c virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveKeyInSection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___RemoveKeyInSection(__IVRSettings___RemoveKeyInSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveKeyInSection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___RemoveKeyInSection(__IVRSettings___RemoveKeyInSection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSettings___RemoveKeyInSection()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___RemoveKeyInSection, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRSettings
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8506))
// CS Name: ::OVR.OpenVR::IVRSettings
struct CORDL_TYPE IVRSettings : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
using _RemoveKeyInSection = ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection;

using _RemoveSection = ::OVR::OpenVR::__IVRSettings___RemoveSection;

using _GetString = ::OVR::OpenVR::__IVRSettings___GetString;

using _GetFloat = ::OVR::OpenVR::__IVRSettings___GetFloat;

using _GetInt32 = ::OVR::OpenVR::__IVRSettings___GetInt32;

using _GetBool = ::OVR::OpenVR::__IVRSettings___GetBool;

using _SetString = ::OVR::OpenVR::__IVRSettings___SetString;

using _SetFloat = ::OVR::OpenVR::__IVRSettings___SetFloat;

using _SetInt32 = ::OVR::OpenVR::__IVRSettings___SetInt32;

using _SetBool = ::OVR::OpenVR::__IVRSettings___SetBool;

using _Sync = ::OVR::OpenVR::__IVRSettings___Sync;

using _GetSettingsErrorNameFromEnum = ::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field GetSettingsErrorNameFromEnum offset 0x0
 __declspec(property(get=__get_GetSettingsErrorNameFromEnum, put=__set_GetSettingsErrorNameFromEnum)) ::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*  GetSettingsErrorNameFromEnum;

/// @brief Field Sync offset 0x8
 __declspec(property(get=__get_Sync, put=__set_Sync)) ::OVR::OpenVR::__IVRSettings___Sync*  Sync;

/// @brief Field SetBool offset 0x10
 __declspec(property(get=__get_SetBool, put=__set_SetBool)) ::OVR::OpenVR::__IVRSettings___SetBool*  SetBool;

/// @brief Field SetInt32 offset 0x18
 __declspec(property(get=__get_SetInt32, put=__set_SetInt32)) ::OVR::OpenVR::__IVRSettings___SetInt32*  SetInt32;

/// @brief Field SetFloat offset 0x20
 __declspec(property(get=__get_SetFloat, put=__set_SetFloat)) ::OVR::OpenVR::__IVRSettings___SetFloat*  SetFloat;

/// @brief Field SetString offset 0x28
 __declspec(property(get=__get_SetString, put=__set_SetString)) ::OVR::OpenVR::__IVRSettings___SetString*  SetString;

/// @brief Field GetBool offset 0x30
 __declspec(property(get=__get_GetBool, put=__set_GetBool)) ::OVR::OpenVR::__IVRSettings___GetBool*  GetBool;

/// @brief Field GetInt32 offset 0x38
 __declspec(property(get=__get_GetInt32, put=__set_GetInt32)) ::OVR::OpenVR::__IVRSettings___GetInt32*  GetInt32;

/// @brief Field GetFloat offset 0x40
 __declspec(property(get=__get_GetFloat, put=__set_GetFloat)) ::OVR::OpenVR::__IVRSettings___GetFloat*  GetFloat;

/// @brief Field GetString offset 0x48
 __declspec(property(get=__get_GetString, put=__set_GetString)) ::OVR::OpenVR::__IVRSettings___GetString*  GetString;

/// @brief Field RemoveSection offset 0x50
 __declspec(property(get=__get_RemoveSection, put=__set_RemoveSection)) ::OVR::OpenVR::__IVRSettings___RemoveSection*  RemoveSection;

/// @brief Field RemoveKeyInSection offset 0x58
 __declspec(property(get=__get_RemoveKeyInSection, put=__set_RemoveKeyInSection)) ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*  RemoveKeyInSection;

constexpr void __set_GetSettingsErrorNameFromEnum(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum* __get_GetSettingsErrorNameFromEnum() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*> __get_GetSettingsErrorNameFromEnum() const;

constexpr void __set_Sync(::OVR::OpenVR::__IVRSettings___Sync*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___Sync* __get_Sync() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___Sync*> __get_Sync() const;

constexpr void __set_SetBool(::OVR::OpenVR::__IVRSettings___SetBool*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___SetBool* __get_SetBool() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___SetBool*> __get_SetBool() const;

constexpr void __set_SetInt32(::OVR::OpenVR::__IVRSettings___SetInt32*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___SetInt32* __get_SetInt32() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___SetInt32*> __get_SetInt32() const;

constexpr void __set_SetFloat(::OVR::OpenVR::__IVRSettings___SetFloat*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___SetFloat* __get_SetFloat() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___SetFloat*> __get_SetFloat() const;

constexpr void __set_SetString(::OVR::OpenVR::__IVRSettings___SetString*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___SetString* __get_SetString() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___SetString*> __get_SetString() const;

constexpr void __set_GetBool(::OVR::OpenVR::__IVRSettings___GetBool*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___GetBool* __get_GetBool() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___GetBool*> __get_GetBool() const;

constexpr void __set_GetInt32(::OVR::OpenVR::__IVRSettings___GetInt32*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___GetInt32* __get_GetInt32() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___GetInt32*> __get_GetInt32() const;

constexpr void __set_GetFloat(::OVR::OpenVR::__IVRSettings___GetFloat*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___GetFloat* __get_GetFloat() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___GetFloat*> __get_GetFloat() const;

constexpr void __set_GetString(::OVR::OpenVR::__IVRSettings___GetString*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___GetString* __get_GetString() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___GetString*> __get_GetString() const;

constexpr void __set_RemoveSection(::OVR::OpenVR::__IVRSettings___RemoveSection*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___RemoveSection* __get_RemoveSection() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___RemoveSection*> __get_RemoveSection() const;

constexpr void __set_RemoveKeyInSection(::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*  value) ;

constexpr ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection* __get_RemoveKeyInSection() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*> __get_RemoveKeyInSection() const;

// Ctor Parameters [CppParam { name: "GetSettingsErrorNameFromEnum", ty: "::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "Sync", ty: "::OVR::OpenVR::__IVRSettings___Sync*", modifiers: "", def_value: None }, CppParam { name: "SetBool", ty: "::OVR::OpenVR::__IVRSettings___SetBool*", modifiers: "", def_value: None }, CppParam { name: "SetInt32", ty: "::OVR::OpenVR::__IVRSettings___SetInt32*", modifiers: "", def_value: None }, CppParam { name: "SetFloat", ty: "::OVR::OpenVR::__IVRSettings___SetFloat*", modifiers: "", def_value: None }, CppParam { name: "SetString", ty: "::OVR::OpenVR::__IVRSettings___SetString*", modifiers: "", def_value: None }, CppParam { name: "GetBool", ty: "::OVR::OpenVR::__IVRSettings___GetBool*", modifiers: "", def_value: None }, CppParam { name: "GetInt32", ty: "::OVR::OpenVR::__IVRSettings___GetInt32*", modifiers: "", def_value: None }, CppParam { name: "GetFloat", ty: "::OVR::OpenVR::__IVRSettings___GetFloat*", modifiers: "", def_value: None }, CppParam { name: "GetString", ty: "::OVR::OpenVR::__IVRSettings___GetString*", modifiers: "", def_value: None }, CppParam { name: "RemoveSection", ty: "::OVR::OpenVR::__IVRSettings___RemoveSection*", modifiers: "", def_value: None }, CppParam { name: "RemoveKeyInSection", ty: "::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*", modifiers: "", def_value: None }]
constexpr IVRSettings(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*  GetSettingsErrorNameFromEnum, ::OVR::OpenVR::__IVRSettings___Sync*  Sync, ::OVR::OpenVR::__IVRSettings___SetBool*  SetBool, ::OVR::OpenVR::__IVRSettings___SetInt32*  SetInt32, ::OVR::OpenVR::__IVRSettings___SetFloat*  SetFloat, ::OVR::OpenVR::__IVRSettings___SetString*  SetString, ::OVR::OpenVR::__IVRSettings___GetBool*  GetBool, ::OVR::OpenVR::__IVRSettings___GetInt32*  GetInt32, ::OVR::OpenVR::__IVRSettings___GetFloat*  GetFloat, ::OVR::OpenVR::__IVRSettings___GetString*  GetString, ::OVR::OpenVR::__IVRSettings___RemoveSection*  RemoveSection, ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*  RemoveKeyInSection) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRSettings()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings, 0x60>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetBool*, "OVR.OpenVR", "IVRSettings/_GetBool");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetFloat);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetFloat*, "OVR.OpenVR", "IVRSettings/_GetFloat");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetInt32);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetInt32*, "OVR.OpenVR", "IVRSettings/_GetInt32");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*, "OVR.OpenVR", "IVRSettings/_GetSettingsErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetString*, "OVR.OpenVR", "IVRSettings/_GetString");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___RemoveKeyInSection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*, "OVR.OpenVR", "IVRSettings/_RemoveKeyInSection");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___RemoveSection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___RemoveSection*, "OVR.OpenVR", "IVRSettings/_RemoveSection");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetBool*, "OVR.OpenVR", "IVRSettings/_SetBool");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetFloat);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetFloat*, "OVR.OpenVR", "IVRSettings/_SetFloat");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetInt32);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetInt32*, "OVR.OpenVR", "IVRSettings/_SetInt32");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetString*, "OVR.OpenVR", "IVRSettings/_SetString");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___Sync);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___Sync*, "OVR.OpenVR", "IVRSettings/_Sync");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings, "OVR.OpenVR", "IVRSettings");
