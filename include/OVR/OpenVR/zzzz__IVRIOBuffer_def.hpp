#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRIOBuffer)
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EIOBufferError;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace OVR::OpenVR {
struct EIOBufferMode;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Open;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Close;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Read;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___PropertyContainer;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Write;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRIOBuffer___Close;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Open;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___PropertyContainer;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Read;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Write;
}
namespace OVR::OpenVR {
struct IVRIOBuffer;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Close);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Open);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___PropertyContainer);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Read);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Write);
MARK_VAL_T(::OVR::OpenVR::IVRIOBuffer);
// Type: ::_Open
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8541))
// CS Name: ::IVRIOBuffer::_Open*
class CORDL_TYPE __IVRIOBuffer___Open : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRIOBuffer___Open* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ef858 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ef930 size 0x14 virtual true final false
inline ::OVR::OpenVR::EIOBufferError Invoke(::StringW  pchPath, ::OVR::OpenVR::EIOBufferMode  mode, uint32_t  unElementSize, uint32_t  unElements, ByRef<uint64_t>  pulBuffer) ;

/// @brief Method BeginInvoke addr 0x27ef944 size 0x108 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchPath, ::OVR::OpenVR::EIOBufferMode  mode, uint32_t  unElementSize, uint32_t  unElements, ByRef<uint64_t>  pulBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27efa4c size 0x2c virtual true final false
inline ::OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint64_t>  pulBuffer, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Open", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRIOBuffer___Open(__IVRIOBuffer___Open && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Open", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRIOBuffer___Open(__IVRIOBuffer___Open const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRIOBuffer___Open()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Open, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_Close
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8542))
// CS Name: ::IVRIOBuffer::_Close*
class CORDL_TYPE __IVRIOBuffer___Close : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRIOBuffer___Close* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27efa78 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27efb3c size 0x14 virtual true final false
inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t  ulBuffer) ;

/// @brief Method BeginInvoke addr 0x27efb50 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  ulBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27efbd4 size 0x28 virtual true final false
inline ::OVR::OpenVR::EIOBufferError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Close", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRIOBuffer___Close(__IVRIOBuffer___Close && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Close", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRIOBuffer___Close(__IVRIOBuffer___Close const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRIOBuffer___Close()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Close, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_Read
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8543))
// CS Name: ::IVRIOBuffer::_Read*
class CORDL_TYPE __IVRIOBuffer___Read : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRIOBuffer___Read* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27efbfc size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27efcc0 size 0x14 virtual true final false
inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t  ulBuffer, ::cordl_internals::intptr_t  pDst, uint32_t  unBytes, ByRef<uint32_t>  punRead) ;

/// @brief Method BeginInvoke addr 0x27efcd4 size 0x100 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  ulBuffer, ::cordl_internals::intptr_t  pDst, uint32_t  unBytes, ByRef<uint32_t>  punRead, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27efdd4 size 0x2c virtual true final false
inline ::OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint32_t>  punRead, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Read", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRIOBuffer___Read(__IVRIOBuffer___Read && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Read", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRIOBuffer___Read(__IVRIOBuffer___Read const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRIOBuffer___Read()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Read, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_Write
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8544))
// CS Name: ::IVRIOBuffer::_Write*
class CORDL_TYPE __IVRIOBuffer___Write : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRIOBuffer___Write* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27efe00 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27efec4 size 0x14 virtual true final false
inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t  ulBuffer, ::cordl_internals::intptr_t  pSrc, uint32_t  unBytes) ;

/// @brief Method BeginInvoke addr 0x27efed8 size 0xe0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  ulBuffer, ::cordl_internals::intptr_t  pSrc, uint32_t  unBytes, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27effb8 size 0x28 virtual true final false
inline ::OVR::OpenVR::EIOBufferError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Write", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRIOBuffer___Write(__IVRIOBuffer___Write && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Write", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRIOBuffer___Write(__IVRIOBuffer___Write const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRIOBuffer___Write()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Write, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_PropertyContainer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8545))
// CS Name: ::IVRIOBuffer::_PropertyContainer*
class CORDL_TYPE __IVRIOBuffer___PropertyContainer : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27effe0 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27f00a4 size 0x14 virtual true final false
inline uint64_t Invoke(uint64_t  ulBuffer) ;

/// @brief Method BeginInvoke addr 0x27f00b8 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  ulBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27f013c size 0x28 virtual true final false
inline uint64_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___PropertyContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRIOBuffer___PropertyContainer(__IVRIOBuffer___PropertyContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___PropertyContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRIOBuffer___PropertyContainer(__IVRIOBuffer___PropertyContainer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRIOBuffer___PropertyContainer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___PropertyContainer, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRIOBuffer
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8546))
// CS Name: ::OVR.OpenVR::IVRIOBuffer
struct CORDL_TYPE IVRIOBuffer : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
using _PropertyContainer = ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer;

using _Write = ::OVR::OpenVR::__IVRIOBuffer___Write;

using _Read = ::OVR::OpenVR::__IVRIOBuffer___Read;

using _Close = ::OVR::OpenVR::__IVRIOBuffer___Close;

using _Open = ::OVR::OpenVR::__IVRIOBuffer___Open;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Open offset 0x0
 __declspec(property(get=__get_Open, put=__set_Open)) ::OVR::OpenVR::__IVRIOBuffer___Open*  Open;

/// @brief Field Close offset 0x8
 __declspec(property(get=__get_Close, put=__set_Close)) ::OVR::OpenVR::__IVRIOBuffer___Close*  Close;

/// @brief Field Read offset 0x10
 __declspec(property(get=__get_Read, put=__set_Read)) ::OVR::OpenVR::__IVRIOBuffer___Read*  Read;

/// @brief Field Write offset 0x18
 __declspec(property(get=__get_Write, put=__set_Write)) ::OVR::OpenVR::__IVRIOBuffer___Write*  Write;

/// @brief Field PropertyContainer offset 0x20
 __declspec(property(get=__get_PropertyContainer, put=__set_PropertyContainer)) ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*  PropertyContainer;

constexpr void __set_Open(::OVR::OpenVR::__IVRIOBuffer___Open*  value) ;

constexpr ::OVR::OpenVR::__IVRIOBuffer___Open* __get_Open() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRIOBuffer___Open*> __get_Open() const;

constexpr void __set_Close(::OVR::OpenVR::__IVRIOBuffer___Close*  value) ;

constexpr ::OVR::OpenVR::__IVRIOBuffer___Close* __get_Close() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRIOBuffer___Close*> __get_Close() const;

constexpr void __set_Read(::OVR::OpenVR::__IVRIOBuffer___Read*  value) ;

constexpr ::OVR::OpenVR::__IVRIOBuffer___Read* __get_Read() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRIOBuffer___Read*> __get_Read() const;

constexpr void __set_Write(::OVR::OpenVR::__IVRIOBuffer___Write*  value) ;

constexpr ::OVR::OpenVR::__IVRIOBuffer___Write* __get_Write() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRIOBuffer___Write*> __get_Write() const;

constexpr void __set_PropertyContainer(::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*  value) ;

constexpr ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer* __get_PropertyContainer() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*> __get_PropertyContainer() const;

// Ctor Parameters [CppParam { name: "Open", ty: "::OVR::OpenVR::__IVRIOBuffer___Open*", modifiers: "", def_value: None }, CppParam { name: "Close", ty: "::OVR::OpenVR::__IVRIOBuffer___Close*", modifiers: "", def_value: None }, CppParam { name: "Read", ty: "::OVR::OpenVR::__IVRIOBuffer___Read*", modifiers: "", def_value: None }, CppParam { name: "Write", ty: "::OVR::OpenVR::__IVRIOBuffer___Write*", modifiers: "", def_value: None }, CppParam { name: "PropertyContainer", ty: "::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*", modifiers: "", def_value: None }]
constexpr IVRIOBuffer(::OVR::OpenVR::__IVRIOBuffer___Open*  Open, ::OVR::OpenVR::__IVRIOBuffer___Close*  Close, ::OVR::OpenVR::__IVRIOBuffer___Read*  Read, ::OVR::OpenVR::__IVRIOBuffer___Write*  Write, ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*  PropertyContainer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRIOBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRIOBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer, 0x28>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Close);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Close*, "OVR.OpenVR", "IVRIOBuffer/_Close");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Open);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Open*, "OVR.OpenVR", "IVRIOBuffer/_Open");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___PropertyContainer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*, "OVR.OpenVR", "IVRIOBuffer/_PropertyContainer");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Read);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Read*, "OVR.OpenVR", "IVRIOBuffer/_Read");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Write);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Write*, "OVR.OpenVR", "IVRIOBuffer/_Write");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer, "OVR.OpenVR", "IVRIOBuffer");
